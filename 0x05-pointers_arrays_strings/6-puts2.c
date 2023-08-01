#include "main.h"
/**
 * puts2 - print n%%2==0
 * @str: array
 * Return: void
 */
void puts2(char *str)
{
	int i, x;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	for (x = 0 ; x < i ; x += 2)
	{
		_putchar(str[x]);
	}
	_putchar('\n');
}
