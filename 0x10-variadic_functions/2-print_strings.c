#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_strings - print string with separator
 * @separator: poniter to char
 * @n: int
 * Return: NONE
 */

void print_strings(const char *separator, unsigned int n, ...)
{
	unsigned int i;
	char *x;
	va_list args;

	va_start(args, n);
	for (i = 0 ; i < n ; i++)
	{
		if (i && separator)
			printf("%s", separator);
		x = va_arg(args, char *);
		printf("%s", (x) ? x : "(nil)");
	}
	printf("\n");
	va_end(args);
}
