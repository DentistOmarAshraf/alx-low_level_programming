#include "main.h"

/**
 * _puts - print str to stdout
 * @s: pointer to str
 * Return: void
 */

void _puts(char *s)
{
	if (!*s)
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts(s + 1);
}
