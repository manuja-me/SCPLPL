#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  int inputNum;

  srand(time(NULL));
  int randomNum = rand() % 1000 + 1;

  while (1) {
    printf("Give me a number between 1 to 1000: ");
    scanf("%d", &inputNum);

    if (inputNum >= 1 && inputNum <= 1000) {
      if (inputNum == randomNum) {
        printf("Congratulations, You're now officially toddler.c\n");
        break;
      } else if (inputNum > randomNum) {
        printf("Too High!\n");
      } else {
        printf("Too Low!\n");
      }
    } else {
      printf("Invalid input dawg! Check Again!!\n");
      break;
    }
  }

  return 0;
}
