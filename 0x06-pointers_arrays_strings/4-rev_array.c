#include "main.h"

/**
 * reverse_array - reverse element of array
 * @a: array str
 * @n: size of elemetns
 * Return: none (void)
 */

void reverse_array(int *a, int n)
{
	int x, i, temp;

	x = n - 1;

	for (i = 0 ; i < n / 2 ; i++)
	{
		temp = a[i];
		a[i] = a[x];
		a[x--] = temp;
	}
}
