#include <stdio.h>

/**
 * main - Writing a code that checks if two values are equal or not equal to themselves.
 * Return - return (0).
 */

int main(void)
{
  int Num1, Num2;

  printf("Enter your values: ");
  scanf("%i %i", &Num1, &Num2);
  {
    if (Num1 == Num2)
      printf("Existing numbers are equal\n");
    else
      printf("Existing numbers not equal\n");
  }
    return (0);
}
