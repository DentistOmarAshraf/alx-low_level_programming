#include "main.h"
/**
 * print_square - painting a sq in stdout with #
 * @size: integer with size of these square
 * Return: no return (void)
 */

void print_square(int size)
{
	int x, i;

	if (size > 0)
	{
	for (x = 0 ; x < size ; x++)
	{
		for (i = 0 ; i < size ; i++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	}
	else
	{
		_putchar('\n');
	}
}
