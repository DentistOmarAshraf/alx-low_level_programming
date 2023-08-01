#include "main.h"
/**
 * puts_half - print half of string array
 * @str: array
 * Return: none
 */
void puts_half(char *str)
{
	int len, i, x;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}

	i = len / 2;
	for (x = i ; x < len ; x++)
	{
		_putchar(str[x]);
	}
	_putchar('\n');
}
