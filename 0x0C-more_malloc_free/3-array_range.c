#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - functoin create arra from min item to max
 * @min: first element of array
 * @max: last element of array
 * Return: array from min to max
 */

int *array_range(int min, int max)
{
	int size, i, j;
	int *ptr;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	ptr = malloc(sizeof(int) * size);
	if (ptr == NULL)
		return (NULL);
	j = 0;
	for (i = min ; i <= max ; i++)
	{
		ptr[j++] = i;
	}
	return (ptr);
}
