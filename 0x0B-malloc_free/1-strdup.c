#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - Function thatduplicates string
 * @str: string to be copy
 * Return: char to newly duplicated string
 */
char *_strdup(char *str)
{
	int j;
	int k = 0;
	char *t;

	if (str == NULL)
		return (NULL);

	while (str[k] != '\0')
		k++;

	t = malloc(sizeof(char) * k + 1);

	if (t == NULL)
		return (NULL);

	for (j = 0; j < k; j++)
		t[j] = str[j];

	return (t);

}
