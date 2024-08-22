#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  int inputNum;
  const int MIN = 1;
  const int MAX = 1000;

  srand(time(NULL));
  int randomNum = (rand() % MAX) + MIN;

  while (1) {
    printf("Give me a number between 1 to 1000: ");
    scanf("%d", &inputNum);

    if (inputNum >= MIN && inputNum <= MAX) {
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
