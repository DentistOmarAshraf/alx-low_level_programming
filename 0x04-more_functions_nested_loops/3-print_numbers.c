#include "main.h"

/**
 * print_numbers - print numbers from 0 - 9
 * @void: none
 * Return: none
 */

void print_numbers(void)
{
	int i;

	for (i = 0 ; i <= 9 ; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');

}
