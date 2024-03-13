#include "search_algos.h"

/**
 * linear_search - searching liner
 * @array: pointer to first element of array
 * @size: size_t size of array
 * @value: value to search
 * Return: index if value or -1 if not found
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;
	int ind = 0;

	for (i = 0 ; i < size ; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);

		if (array[i] == value)
			return (ind);
		ind++;
	}
	return (-1);
}
