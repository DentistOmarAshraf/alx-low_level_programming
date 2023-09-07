#include "main.h"

/**
 * array_range - create array from min to max
 * @min: minimum
 * @max: maximum
 * Return: pointer to int array
 */

int *array_range(int min, int max)
{
	int size, i, x;
	int *arr;

	size = max - min;
	if (size <= 0)
		return (NULL);
	arr = malloc(sizeof(int) * size);
	if (arr == NULL)
		return (NULL);
	for (x = 0, i = min ; i < max ; x++, i++)
		arr[x] = i;
	return (arr);
}
