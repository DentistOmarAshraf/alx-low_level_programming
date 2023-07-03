#include "main.h"
/**
 * print_line - draw line at stdout
 * @n: intger parameter
 * Return: none
 */

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 1; i <= n ; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
