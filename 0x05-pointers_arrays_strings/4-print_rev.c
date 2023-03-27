#include "main.h"

/**
 * print_rev - print reverse a string
 *
 * @s: string to print
 * Return: 0
 */
void print_rev(char *s)
{
int start = 0;
while (s[start])
start++;
while (start--)
_putchar(s[start]);
_putchar('\n');
}
