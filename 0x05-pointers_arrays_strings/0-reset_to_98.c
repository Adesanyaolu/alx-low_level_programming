#include <stdio.h>

/**
 * main - derefencing pointers
 *
 * Return: Always 0.
 */
int main(void)
{
   int n;
   int *p;

   n = 402;
   p = &n;
   printf("Value of 'n': %d\n", n);
   *p = 98;
   printf("Value of 'n': %d\n", n);
   return (0);
}