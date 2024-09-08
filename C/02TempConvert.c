#include <stdio.h>
#include <ctype.h>

int main() {
  
  char unit;
  float temp;

  printf("\nIs the Temperature in (f) or (c)?: ");
  scanf(" %c", &unit);

  unit = toupper(unit);

  if (unit == 'C') {
    printf("\nEnter the temp in Celcius: ");
    scanf("%f", &temp);
    temp = (temp * 9/5) + 32;
    printf("\nThe temp in Fahrenheit is: %.1f\n", temp);
  }
  else if (unit == 'F') {
    printf("\nEnter the temp in Fahrenheit: "); 
    scanf("%f", &temp);
    temp = (temp - 32) * 5/9;
    printf("\nThe temp in Celcius is: %.1f\n", temp);
  }
  else {
    printf("\n %c is not a valid measurement\n", unit);
  }

  return 0;
}
