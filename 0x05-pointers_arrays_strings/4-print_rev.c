#include "main.h"
/**
 * print_rev - print reversed array
 * @s: string Array
 * Return: void none
 */
void print_rev(char *s)
{
	int x, len;

	x = 0;
	while (s[x] != '\0')
	{
		x++;
	}

	len = x;

	while (len >= 0)
	{
		_putchar(s[len]);
		len--;
	}
	_putchar('\n');
}
