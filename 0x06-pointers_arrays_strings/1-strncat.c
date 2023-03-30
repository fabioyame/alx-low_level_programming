#include "main.h"

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
int index = 0, dest_len = 0;

while (dest[index++])
dest_len++;
for (index = 0; src[index] && index < n; index++)
dest[dest_len++] = src[index];
return (dest);
}
