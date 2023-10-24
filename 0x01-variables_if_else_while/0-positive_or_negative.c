#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point for all program
 *
 * Return: Always 0(success) 
 */
int main(void)
{
  int n;

  srand(time(0));
  n = rand() - RAND_MAX / 2;
  /** 
   * Check if n is positive, negative, or zero 
   */
  if (n > 0)
    {
      printf("The number %d is positive\n", n);
    }
  else if (n == 0)
    {
      printf("The number %d is zero\n", n);
    }
  else
    {
      printf("The number %d is negative\n", n);
    }
  return (0);
}
