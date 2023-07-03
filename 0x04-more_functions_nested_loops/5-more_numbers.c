#include "main.h"
/**
 * more_numbers - print numbers from 0 - 14 (10 times)
 * @void: no parameters
 * Return: none
 */

void more_numbers(void)
{
	int x, y, z, e;

	for (x = 0 ; x <= 10 ; x++)
	{
		for (y = 0 ; y <= 14 ; y++)
		{
			if (y <= 9)
			{
				_putchar(y + '0');
			}
			else
			{
				z = y % 10; /*first number*/
				e = (y - z) / 10; /*seconed*/
				_putchar(e + '0');
				_putchar(z + '0');
			}
		}
		_putchar('\n');
	}
}
