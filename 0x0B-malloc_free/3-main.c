#include "main.h"
#include <stdio.h>

void print_grid(int **grid, int width, int height)
{
	int w;
	int h;

	h = 0;
	while (h < height)
	{
		w = 0;
		while (w < width)
		{
			printf("%d ", grid[h][w]);
			w++;
		}
		printf("\n");
		h++;
	}
}

int main(void)
{
	int **grid;

	grid = alloc_grid(48, 32);
	if (grid == NULL)
	{
		return (1);
	}
	print_grid(grid,48,32);
	printf("\n");
	grid[0][3] = 98;
	grid[3][4] = 402;
	print_grid(grid, 48, 32);
	return (0);
}
