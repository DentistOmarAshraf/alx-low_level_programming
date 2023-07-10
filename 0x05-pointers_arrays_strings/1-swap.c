#include "main.h"
/**
 * swap_int - swap the value of two intgers
 * @a: first pointer
 * @b: sec pointer
 * Return: no return
 */

void swap_int(int *a, int *b)
{
	int x, y;

	x = *a;
	y = *b;

	*a = y;
	*b = x;
}
