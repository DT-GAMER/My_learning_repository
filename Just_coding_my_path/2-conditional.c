#include <stdio.h>

/**
 * main - Write a program that checks if a number is even or odd.
 * Return - return (0)
 */

int main(void)
{
  int Num;
  printf("Enter your number: ");
  scanf("%i", &Num);
  {
    if (Num % 2 == 0)
      printf("This is an even number\n");
    else
      printf("This is an odd number\n");
  }
    return (0);
}  
