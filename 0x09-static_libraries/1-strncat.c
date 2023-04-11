#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _strncat - function that concatenates two strings
 * using at most an inputted number of bytes from src.
 * @dest: destination string to be appended upon.
 * @src: source string to be appended to dest.
 * @n: The number of bytes from src to be appended to dest.
 * Return: pointer to destination string.
 */

char *_strncat(char *dest, char *src, int n)
{
return (strncat(dest, src, n));
}
