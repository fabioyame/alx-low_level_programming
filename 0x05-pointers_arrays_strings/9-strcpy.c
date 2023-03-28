#include "main.h"
/**
 * _strcpy - main function to copy
 *
 * @dest: destination to copy
 * @src: char type string
 *
 * Return: a character value
 */

char *_strcpy(char *dest, char *src)
{
int i = -1;

do {
i++;
dest[i] = src[i];
}while (src[i] != '\0');
return (dest);
}
