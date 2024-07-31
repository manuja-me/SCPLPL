#include <stdio.h>

int main() {

  char operator;
  double num1;
  double num2;
  double result;

  printf("\nEnter an operator ( + - * / ): ");
  scanf(" %c", &operator);

  printf("\nEnter num1: ");
  scanf("%lf", &num1);

  printf("\nEnter num2: ");
  scanf("%lf", &num2);

  switch (operator) {

    case '+':
      result = num1 + num2;
      printf("\nresult: %lf\n", result);
      break;
    case '-':
      result = num1 - num2;
      printf("\nresult: %lf\n", result);
      break;
    case '*':
      result = num1 * num2;
      printf("\nresult: %lf\n", result);
      break;
    case '/':
      if (num2 == 0) {
        printf("\nError: Division by zero is not allowed\n");
      } else {
        result = num1 / num2;
        printf("\nResult: %lf\n", result);
      }
      break;
    default:
      printf("\n%c is not valid\n", operator);
    
  }

  return 0;
}
