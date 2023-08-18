#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - print str
 * @separator: separetor
 * @n: number
 * Return: none
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	char *sep;
	char *ptr;
	unsigned int x;
	va_list args;

	if (separator == NULL || *separator == 0)
		sep = "";
	else
		sep = (char *) separator;

	va_start(args, n);

	if (n > 0)
		printf("%s", va_arg(args, char *));
	for (x = 1 ; x < n ; x++)
	{
		ptr = va_arg(args, char *);
		if (ptr == NULL)
			ptr = "(nil)";
		printf("%s%s", sep, ptr);
	}
	printf("\n");
	va_end(args);
}
