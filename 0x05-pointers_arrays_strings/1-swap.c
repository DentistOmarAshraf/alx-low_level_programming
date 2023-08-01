#include "main.h"
/**
 * swap_int - swap two values
 * @a: pointer to integer
 * @b: pointer to integer
 * Return: none void
 */

void swap_int(int *a, int *b)
{
	int x;
	int y;

	x = *a;
	y = *b;
	*a = y;
	*b = x;
}
