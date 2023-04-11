#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid  - frees up a grid 2d array
 * @grid: grid to check
 * @height: height of grid
 */
void free_grid(int **grid, int height)
{
	int j;

	if (height <= 0)
		return;

	if (grid == NULL)
		return;

	for (j = 0; j < height; j++)
	{
		free(grid[j]);
	}

	free(grid);
}
