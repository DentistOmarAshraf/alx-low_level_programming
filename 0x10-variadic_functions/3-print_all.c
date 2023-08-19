#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_all - variadic function
 * @format: pointer
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list(args);
	char *sep = "";
	char *ptr;
	char c;
	int i, x;
	float y;

	va_start(args, format);
	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
		case 'c':
			c = va_arg(args, int);
			printf("%s%c", sep, c);
			break;
		case 'i':
			x = va_arg(args, int);
			printf("%s%d", sep, x);
			break;
		case 'f':
			y = va_arg(args, double);
			printf("%s%f", sep, y);
			break;
		case 's':
			ptr = va_arg(args, char *);
			printf("%s%s", sep, (ptr) ? ptr : "(nil)");
			break;
		default:
		break;
		}
		sep = ", ";
		i++;
	}
	va_end(args);
	printf("\n");
}
