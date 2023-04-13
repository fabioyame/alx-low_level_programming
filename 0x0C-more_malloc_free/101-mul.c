#include "main.h"
#include <stdlib.h>
#include <stdio.h>

#define ERR_MSG "Error"

/**
 * is_digit - function to checks if a
 * string contains a non-digit char
 * @s: string to be evaluated
 * Return: 0 if a non-digit is found
 * if not found return 1
 */
int is_digit(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

/**
 * _strlen - function to returns
 * the length of a string
 * @s: string to be evaluated
 * Return: return length of the string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * errors - handles errors for main
 */
void errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - multiplies two positive numbers
 * @argc: the number of arguments
 * @argv: the array of arguments
 *
 * Return: Always zero (Success)
 */
int main(int argc, char *argv[])
{
	char *s1, *s2;
	int ln1, ln2, ln, i, carry, digit1, digit2, *result, a = 0;

	s1 = argv[1], s2 = argv[2];
	if (argc != 3 || !is_digit(s1) || !is_digit(s2))
		errors();
	ln1 = _strlen(s1);
	ln2 = _strlen(s2);
	ln = ln1 + ln2 + 1;
	result = malloc(sizeof(int) * ln);
	if (!result)
		return (1);
	for (i = 0; i <= ln1 + ln2; i++)
		result[i] = 0;
	for (ln1 = ln1 - 1; ln1 >= 0; ln1--)
	{
		digit1 = s1[ln1] - '0';
		carry = 0;
		for (ln2 = _strlen(s2) - 1; ln2 >= 0; ln2--)
		{
			digit2 = s2[ln2] - '0';
			carry += result[ln1 + ln2 + 1] + (digit1 * digit2);
			result[ln1 + ln2 + 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
			result[ln1 + ln2 + 1] += carry;
	}
	for (i = 0; i < ln - 1; i++)
	{
		if (result[i])
			a = 1;
		if (a)
			_putchar(result[i] + '0');
	}
	if (!a)
		_putchar('0');
	_putchar('\n');
	free(result);
	return (0);
}


