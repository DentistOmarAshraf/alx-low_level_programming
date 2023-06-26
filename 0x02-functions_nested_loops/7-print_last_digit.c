#include "main.h"
/**
 * print_last_digit - print last digit
 * @n: any intger
 *
 * Description: print last number
 *
 * Return: last digit returned
 */

int print_last_digit(int n)
{
	int last;

	last = n % 10;

	if (last < 0)
	{
		last = last * -1;
	}

	_putchar(last + '0');

	return (last);
}
