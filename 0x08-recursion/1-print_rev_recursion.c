#include "main.h"
/**
 * _print_rev_recursion - print reversed string array
 * @s: string array
 * Return: none(void)
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
