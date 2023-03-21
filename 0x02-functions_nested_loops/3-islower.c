#include "main.h"
/**
 * _islower - main function
 *
 * @c: character to be check
 *
 * Return: 1 if true, 0 for anything else
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
	return (1);
	}
	return (0);
}
