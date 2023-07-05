#include "main.h"
#include <stdio.h>
/**
 * print_number - printing numbers with putchar
 * @n: intger number
 * Return: no return
 */

void print_number(int n)
{
	unsigned int i;
	int x, y, z, a;

	if (n < 0)
	{
		i = n * -1;
		_putchar('-');
	}
	else
	{
		i = n;
	}
	x = i % 10;
	y = ((i % 100) - x) / 10;
	z = (i % 1000 - i % 100) / 100;
	a = (i - (i % 1000)) / 1000;

	if ((n >= 0 && n <= 9) || (n < 0 && n >= -9))
	{
		_putchar(i + '0');
	}
	else if ((n > 9 && n <= 99) || (n < -9 && n >= -99))
	{
		_putchar(y + '0');
		_putchar(x + '0');
	}
	else if ((n > 99 && n <= 999) || (n < -99 && n >= -999))
	{
		_putchar(z + '0');
		_putchar(y + '0');
		_putchar(x + '0'); }
	else if ((n > 999 && n <= 9999) || (n < -999 && n >= -9999))
	{
		_putchar(a + '0');
		_putchar(z + '0');
		_putchar(y + '0');
		_putchar(x + '0'); }
}
