#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - creates matrix through nested loop
 * @width: width of array value
 * @height: height of array value
 * Return: pointer of new grid
 */
int **alloc_grid(int width, int height)
{
	int **t;
	int n;
	int m;

	if (width <= 0 || height <= 0)
		return (NULL);

	t = (int **)malloc(sizeof(int *) * height);
	if (t == NULL)
		return (NULL);

	for (n = 0; n < height; n++)
	{
		t[n] = (int *)malloc(sizeof(int) * width);
		if (t[n] == NULL)
		{
			for (m = 0; m < n; m++)
			{
				free(t[m]);
			}
			free(t);
		}
	}

	for (n = 0; n < height; n++)
		for (m = 0; m < width; m++)
			t[n][m] = 0;

	return (t);
}
