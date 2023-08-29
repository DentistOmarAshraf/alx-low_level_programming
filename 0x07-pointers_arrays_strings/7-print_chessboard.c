#include "main.h"

/**
 * print_chessboard - print chess board
 * @a: 2d array
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	unsigned int x, y;

	for (x = 0 ; x < 8 ; x++)
	{
		for (y = 0 ; y < 8 ; y++)
		{
			_putchar(a[x][y]);
		}
		_putchar('\n');
	}
}
