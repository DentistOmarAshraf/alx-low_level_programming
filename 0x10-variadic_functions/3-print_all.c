#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_char - print char
 * @args: va_list
 * Return: NONE
 */
void print_char(va_list args)
{
	char c;

	c = va_arg(args, int);
	printf("%c", c);
}
/**
 * print_str - print string
 * @args: va_list
 * Return: NONE
 */
void print_str(va_list args)
{
	char *str;

	str = va_arg(args, char *);
	printf("%s", (str) ? str : "(nil)");
}
/**
 * print_int - print int
 * @args: va_list
 * Return: NONE
 */
void print_int(va_list args)
{
	int i;

	i = va_arg(args, int);
	printf("%d", i);
}
/**
 * print_float - print float
 * @args: va_list
 * Return: NONE
 */
void print_float(va_list args)
{
	double f;

	f = va_arg(args, double);
	printf("%f", f);
}
/**
 * print_all - print all
 * @format: pointer to char
 * Reutrn: NONE
 */
void print_all(const char * const format, ...)
{
	opt_t ops[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_str},
	};
	va_list args;
	int i;
	int j;
	char *sep = ", ";
	char *sep2 = "";

	va_start(args, format);

	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == ops[j].c[0])
			{
				if (i)
					printf("%s", sep);
				else
					printf("%s", sep2);
				ops[j].f(args);
				break;
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
