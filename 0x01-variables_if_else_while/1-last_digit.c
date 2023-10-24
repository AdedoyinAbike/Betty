#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main - Entry point for all program
 *
 *Return:Always 0(success)
 */
int main(void)
{
  int n;

  srand(time(0));
  n = rand() - RAND_MAX / 2;
  int l = n % 10;
  printf("Last digit of %d is ", n);
  if (l > 5)
    {
      printf("and is greater than 5\n");
    }
  else if (l == 0)
    {
      printf("is zero\n");
    }
  else 
    {
      printf("and is less than 6 and not 0\n");
    }
  return (0);
}
