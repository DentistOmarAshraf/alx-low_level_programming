#include "main.h"

/**
 * alloc_grid - pointer to pointer allocatiom
 * @width: width of 2d array
 * @height: height of 2d array
 * Return: 2d array (pointer to pointer)
 */

int **alloc_grid(int width, int height)
{
	int **new;
	int i, j;

	if (width <= 0  || height <= 0)
		return (NULL);
	new = malloc(sizeof(int *) * height);
	if (new == NULL)
	{
		return (NULL);
		free(new);
	}
	for (i = 0 ; i < height ; i++)
	{
		new[i] = malloc(sizeof(int) * width);
		if (new[i] == NULL)
		{
			free(new[i]);
			free(new);
			return (NULL);
		}
	}
	for (i = 0 ; i < height ; i++)
		for (j = 0 ; j < width ; j++)
			new[i][j] = 0;

	return (new);
}
