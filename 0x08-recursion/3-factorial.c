#include "main.h"
/**
 * factorial - This will give factorial of a number
 *
 * @n: The number to use
 *
 * Return: Always returns factor or -1
 */

int factorial(int n)
{
if (n < 0)
return (-1);
if (n > 0)
return (n * factorial(n - 1));
return (1);
}
