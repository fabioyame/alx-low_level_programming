#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - Main function to creates array od size
 * and assign char c
 * @size: size of array to create
 * @c: char to be initialize
 * Return: char value, NULL if fail
 */
char *create_array(unsigned int size, char c)
{
	char *st;
	unsigned int i;

	if (size <= 0)
		return (NULL);
	st = malloc(sizeof(char) * size);
	if (st == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		st[i] = c;

	return (st);
}
