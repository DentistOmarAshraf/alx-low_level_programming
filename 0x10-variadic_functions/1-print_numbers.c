#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - print number with sep
 * @separator: pointer to char
 * @n: int
 * Return: NONE
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);
	for (i = 0 ; i < n ; i++)
	{
		if (i && separator)
			printf("%s", separator);
		printf("%d", va_arg(args, int));
	}
	printf("\n");
	va_end(args);
}
