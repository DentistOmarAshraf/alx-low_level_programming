#include "search_algos.h"

/**
 * binary_search - Binary Search Algorithm
 * @arr: pointer of array
 * @size: size_t size of array
 * @val: value to search in array
 * Return: return index and -1 if not found
 */

int binary_search(int *arr, size_t size, int val)
{
	size_t l = 0, r = size - 1, i, mid;
	int gus;

	if (size == 0 || !arr)
		return (-1);
	while (l <= r)
	{
		printf("Searching in array: ");
		for (i = l ; i <= r ; i++)
		{
			if (i != l)
				printf(", ");
			printf("%d", arr[i]);
		}
		printf("\n");

		mid = (l + r) / 2;
		gus = arr[mid];

		if (gus == val)
			return (mid);
		if (gus < val)
			l = mid + 1;
		else
			r = mid - 1;
	}
	return (-1);
}
