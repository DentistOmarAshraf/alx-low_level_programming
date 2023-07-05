#include "main.h"
/**
 * print_number - printing numbers with putchar
 * @n: intger number
 * Return: no return
 */

void print_number(int n)
{
	if (n >= 0 && n <= 9)
	{
		_putchar(n + '0');
	}
	else
	if (n > 9 && n <= 99)
	{
		int x = n % 10;
		int y = (n - x) / 10;

		_putchar(y + '0');
		_putchar(x + '0');
	}
	else
	if (n > 99 && n <= 999)
	{
		int x = n % 10;
		int y = ((n % 100) - x) / 10;
		int z = (n - (n % 100)) / 100;

		_putchar(z + '0');
		_putchar(y + '0');
		_putchar(x + '0');
	}
	else
	if (n > 999 && n <= 9999)
	{
		int x = n % 10;
		int y = ((n % 100) - x) / 10;
		int z = ((n - (n % 100) / 100)) % 10;
		int a = (n - (n % 1000)) / 1000;

		_putchar(a + '0');
		_putchar(z + '0');
		_putchar(y + '0');
		_putchar(x + '0');
	}
}
