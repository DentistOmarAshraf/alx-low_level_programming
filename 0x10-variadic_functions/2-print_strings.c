#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strcpy - str copy
 * @s: pointer to char
 * Return: pointer to char
 */
char *_strcpy(char *s)
{
	int len, i;
	char *tosend;

	if (!s)
		return (NULL);
	for (len = 0 ; s[len] ; len++)
		;
	tosend = malloc(sizeof(char) * (len + 1));
	if (tosend == NULL)
		return (NULL);
	for (i = 0 ; i < len ; i++)
		tosend[i] = s[i];
	tosend[i] = '\0';
	return (tosend);
}
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
		x = _strcpy(va_arg(args, char *));
		printf("%s", (x) ? x : "(nil)");
		free(x);
	}
	printf("\n");
	va_end(args);
}
