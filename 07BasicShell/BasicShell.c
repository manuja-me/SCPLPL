#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <time.h>
#include <unistd.h>

#define MAX_LINE 1024 // maximum length of a command
#define MAX_ARGS 64   // maximum number of arguments

void parse_input(char *input, char **args);
void execute_command(char **args);

int main() {
  char input[MAX_LINE];
  char *args[MAX_ARGS];

  while (1) {
    printf("shell$ ");
    if (fgets(input, MAX_LINE, stdin) == NULL) {
      break;
    }

    parse_input(input, args);

    if (args[0] == NULL)
      continue; // empty command

    if (strcmp(args[0], "exit") == 0)
      break; // exit shell

    execute_command(args);
  }

  return 0;
}

void parse_input(char *input, char **args) {
  for (int i = 0; i < MAX_ARGS; i++) {
    args[i] = strsep(&input, " \n\t");
    if (args[i] == NULL)
      break;
  }
}

void execute_command(char **args) {
  pid_t pid = fork();

  if (pid < 0) { // fork failed
    perror("Fork Failed!");
    exit(1);
  } else if (pid == 0) { // Child process
    if (execvp(args[0], args) == -1) {
      perror("Error executing command");
    }
    exit(1);
  } else { // parent process
    int status;
    waitpid(pid, &status, 0); // wait for the child process to complete
  }
}
