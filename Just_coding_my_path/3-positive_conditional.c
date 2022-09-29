#include <stdio.h>

/**
 * main - write a program that checks the positivity or negativity of a number
 *
 * Return - return (0)
 */

int main(void)
{
  int Num;
  printf("Enter your number: ");
  scanf("%d", &Num);
  {
    if (Num >= 0)
      printf("%d is a positive number\n", Num);
    else
      printf("%d is a negative number\n", Num);
  }
    return (0);
}
