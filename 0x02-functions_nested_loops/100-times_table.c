#include "main.h"
/**
 * print_times_table - print any number time table
 * @n: is int
 *
 * Description: time table of @n
 *
 * Return: void no return
 */
void print_times_table(int n)
{
	int a, b, c, d, e, f;

	if (n < 15 && n >= 0)
{
	for (a = 0; a <= n ; a++)
{
		for (b = 0; b <= n; b++)
		{	c = a * b;
			d = c % 10;/*first digit*/
			e = ((c % 100) - d) / 10;/*seconed digit*/
			f = (c - (c % 100)) / 100;/*third digit*/
		if (c >= 100)
		{	_putchar(',');
			_putchar(' ');
			_putchar(f + '0');
			_putchar(e + '0');
			_putchar(d + '0');
		}
		else if (c > 9 && c <= 99)
		{
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
			_putchar(e + '0');
			_putchar(d + '0');
		}
		else
		{
		if (b != 0)
		{	_putchar(',');
			_putchar(' ');
			_putchar(' ');
			_putchar(' ');
		}
		_putchar(c + '0');
		}
		}
		_putchar('\n');
	}
}
}

