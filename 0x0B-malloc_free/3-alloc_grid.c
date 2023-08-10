#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * alloc_grid - intiliaze 2d array with value 0
 * @width: int represent the width of each array in array
 * @height: int represent the height of arrays
 * Return: 2d array
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **ptr;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	ptr = (int **)malloc(height * sizeof(int *));
	if (ptr == NULL)
		return (NULL);

	for (i = 0 ; i < height ; i++)
	{
		ptr[i] = (int *)malloc(width * sizeof(int));
		if (ptr[i] == NULL)
		{
			for (j = 0 ; j < i ; j++)
				free(ptr[j]);
			free(ptr);
			return (NULL);
		}
		for (j = 0 ; j < width ; j++)
		{
			ptr[i][j] = 0;
		}
	}
	return (ptr);
}
