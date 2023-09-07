#include "main.h"

/**
 * array_range - create array from min to max
 * @min: minimum
 * @max: maximum
 * Return: pointer to int array
 */

int *array_range(int min, int max)
{
	int size, i;
	int *arr;

	size = max - min;
	if (size <= 0)
		return (NULL);
	arr = malloc(sizeof(*arr) * size);
	if (arr == NULL)
		return (NULL);
	for (i = min ; i < max ; i++)
		arr[i] = i;
	arr[i] = '\0';
	return (arr);
}
