#include "main.h"
/**
 * _strlen_recursion - The length of string
 *
 * @s: The string to count
 *
 * Return: The total length of string
 */
int _strlen_recursion(char *s)
{
int n = 0;

if (*s)
{
n = _strlen_recursion(s + 1);
return (n += 1);
}
return (0);
}
