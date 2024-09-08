#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_TASKS 100
#define MAX_TASK_LENGTH 100

typedef struct {
  char taskName[MAX_TASK_LENGTH];
  bool completed;
} Task;

void add_task(Task todo_list[], int *task_count);
void view_task(Task todo_list[], int *task_count);
void complete_task(Task todo_list[], int *task_count);
void delete_task(Task todo_list[], int *task_count);

int main() {
  Task todo_list[MAX_TASKS];
  int task_count = 0;
  char command;

  while (1) {
    printf("Enter a command - (a)dd, (v)iew, (c)omplete, (d)elete, (e)xit : ");
    scanf(" %c", &command);

    if (command == 'a') {
      add_task(todo_list, &task_count);
    } else if (command == 'v') {
      view_task(todo_list, &task_count);
    } else if (command == 'c') {
      complete_task(todo_list, &task_count);
    } else if (command == 'd') {
      delete_task(todo_list, &task_count);
    } else if (command == 'e') {
      printf("\nSee ya\n");
      break;
    } else {
      printf("\nInvalid Command Dawg!!\n");
    }
  }

  return 0;
}

void add_task(Task todo_list[], int *task_count) {
  if (*task_count >= MAX_TASKS) {
    printf("Task list is full!\n");
    return;
  }

  printf("Give me a task to store: ");
  scanf(" %[^\n]", todo_list[*task_count].taskName);
  todo_list[*task_count].completed = false;
  (*task_count)++;
  printf("Task Added!\n\n");
}

void view_task(Task todo_list[], int *task_count) {
  if (task_count == 0) {
    printf("\nThere's no task to display!\n\n");
  } else {
    for (int i = 0; i < *task_count; i++) {
      const char *status = todo_list[i].completed ? "completed" : "pending";
      printf("%d. %s (%s)\n", i + 1, todo_list[i].taskName, status);
    }
  }
}

void complete_task(Task todo_list[], int *task_count) {
  int task_num;
  printf("Enter the task number to mark it as completed: ");
  scanf("%d", &task_num);

  if (task_num > 0 && task_num <= *task_count) {
    todo_list[task_num - 1].completed = true;
    printf("Task mark as complete.\n\n");
  } else {
    printf("Invalid task number.. check again!!\n\n");
  }
}

void delete_task(Task todo_list[], int *task_count) {
  int task_num;
  printf("Enter the task number to delete task: ");
  scanf("%d", &task_num);

  if (task_num > 0 && task_num <= *task_count) {
    for (int i = task_num - 1; i < *task_count - 1; i++) {
      todo_list[i] = todo_list[i + 1];
    }
    (*task_count)--;
    printf("Task deleted permanently!!!\n\n");
  } else {
    printf("Not a valid task number\n\n");
  }
}
