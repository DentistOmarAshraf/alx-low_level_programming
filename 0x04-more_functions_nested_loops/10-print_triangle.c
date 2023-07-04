#include "main.h"

/**
 * print_triangle - printing a triangle with #
 * @size: int of size of tri
 * Return: no return
 */

void print_triangle(int size)
{
	int x, y;

	if (size > 0)
	{
		for(x = 1 ; x <= size ; x++)
		{
			for(y = 1; y <= size ; y++)
			{
				if (y <= size - x)
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
				
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
