#include <stdio.h>
#include "main.h"
/**
 * main - main function
 *
 * Description: print the number 1-100 with fizz for multiple
 * of 3, Buzz for multiple of 5, and fizzbuzz for multiple of both
 * Return: Always 0
 */

int main(void)
{
int i;

for (i = 1; i <= 100; i++)
{
if (i % 3 == 0 || i % 5 == 0)
{
if (i % 3 == 0)
{
printf("Fizz");
}
if (i % 5 == 0)
{
printf("Buzz");
}
}
else
{
printf("%d", i);
}
if (i != 100)
printf(" ");
}
printf("\n");
return (0);
}
