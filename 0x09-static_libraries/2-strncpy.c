#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * _strncpy - copies a string
 * @dest: destination to copy
 * @src: source to copy
 * @n: amount of places to copy
 * Return: value of dest
 */
char *_strncpy(char *dest, char *src, int n)
{
return (strncpy(dest, src, n));
}
