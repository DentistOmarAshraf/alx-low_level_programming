#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - function to free memo
 * @grid: pointer of grid of int type
 * @height: int type
 * Return: clean up memo
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == 0 || grid == NULL)
	{
		return;
	}

	for (i = 0 ; i < height ; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
