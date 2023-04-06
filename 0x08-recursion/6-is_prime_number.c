#include "main.h"
/**
 * stager - Assit in function
 * @i: stager int
 * @n: The integer I am evaluating
 * Return: value
 */
int stager(int i, int n)
{
	if (n % i == 0 && n != i)
		return (0);
	if (n % i != 0 && i < n)
		return (stager(i + 1, n));
	return (1);
}
/**
 * is_prime_number - is prime or not
 * @n: integer to evaluate
 * Return: 1 if the input integer is a prime number, otherwise return 0
 */
int is_prime_number(int n)
{
	int i = 2;

	if (n < 2)
		return (0);
	return (stager(i, n));
}
