#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - print number and betewwn the separetor
 * @separetor: ...
 * @n: count of list
 * Return: none void
 */

void print_numbers(const char *separetor, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int x;

	va_start(args, n);
	for (i = 0 ; i < n ; i++)
	{
		x = va_arg(args, int);
		printf("%d", x);
		if (i == (n - 1))
		{
			printf("\n");
			return;
		}
		if (separetor != NULL)
		{
			printf("%s ", separetor);
		}
	}
	va_end(args);
}
