#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - range of arrays
 * @min: min of range of values stored
 * @max: max of range of values stored
 * Return: pointer to the new array
 */
int *array_range(int min, int max)
{
	int i;
	int *ct;
	int ln;

	if (min > max)
		return (NULL);
	ln = 0;
	for (i = min; i <= max; i++)
		ln++;

	ct = malloc(sizeof(int) * ln);
	if (ct == NULL)
		return (NULL);

	i = 0;
	while (min <= max)
	{
		ct[i] = min;
		i++;
		min++;
	}
	return (ct);
}
