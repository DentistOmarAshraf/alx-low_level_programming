#include "main.h"
/**
 * print_number - printing numbers with putchar
 * @n: intger number
 * Return: no return
 */

void print_number(int n)
{
	int x, y, z, a;

	if (n < 0)
	{
		a = n * -1;
		x = (a % 10);
		y = (a - x) / 10;
		_putchar('-');
		_putchar(y + '0');
		_putchar(x + '0');
	}
	else if (n >= 0 && n <= 9)
	{
		_putchar(n + '0');
	}
	else if (n > 9 && n <= 99)
	{
		x = n % 10;
		y = (n - x) / 10;
		_putchar(y + '0');
		_putchar(x + '0');
	}
	else if (n > 99 && n <= 999)
	{
		x = n % 10;
		y = ((n % 100) - x) / 10;
		z = (n - (n % 100)) / 100;
		_putchar(z + '0');
		_putchar(y + '0');
		_putchar(x + '0'); }
	else if (n > 999 && n <= 9999)
	{
		x = n % 10;
		y = ((n % 100) - x) / 10;
		z = (n % 1000 - n % 100) / 100;
		a = (n - (n % 1000)) / 1000;
		_putchar(a + '0');
		_putchar(z + '0');
		_putchar(y + '0');
		_putchar(x + '0'); }
}
