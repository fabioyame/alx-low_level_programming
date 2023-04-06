#include "main.h"
#include "stdio.h"

int _sqrt(int n, int i);

/**
 * _sqrt_recursion - This will return square root
 * @n: The integer to return
 * Return: returns int of squareroot
 */

int _sqrt_recursion(int n)
{
return (_sqrt(n, 1));
}
/**
 * _sqrt - This will return the natural square root
 * @n: The number to be calculated
 * @i: number
 * Return: The square root
 */
int _sqrt(int n, int i)
{
	int sqrt = i * i;

	if (sqrt > n)
	return (-1);
	if (sqrt == n)
	return (i);
	return (_sqrt(n, i + 1));
	}
