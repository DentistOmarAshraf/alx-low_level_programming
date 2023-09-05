#include "main.h"

/**
 * free_grid - free all malloced memo
 * @grid: pointer to pointer
 * @height: height of grif
 * Return: void NONE
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0 ; i < height ; i++)
		free(grid[i]);
	free(grid);
}
