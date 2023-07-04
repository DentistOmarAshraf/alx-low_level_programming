#include "main.h"

/**
 * print_triangle - printing a triangle with #
 * @size: int of size of tri
 * Return: no return
 */

void print_triangle(int size)
{
	int x, y, z;

	for (x = 1; x <= size ; x++)
	{
		for (y = size; y >= x ; y--)
		{
			_putchar(' ');
		}
		for (z = 0 ; z <= y ; z++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
