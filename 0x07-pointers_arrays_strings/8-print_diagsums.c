#include <stdio.h>
#include "main.h"
/**
 * print_diagsums - sum diagonally
 * @a: pointer to array
 * @size: size of array
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int x, n, sum, sum2;

	n = size * size;

	sum = 0;
	for (x = 0 ; x < n ; x = x + size + 1)
		sum += a[x];
	sum2 = 0;
	for (x = size - 1 ; x < n - (size - 1); x = x + (size - 1))
		sum2 += a[x];

	printf("%d, %d\n", sum, sum2);
}
