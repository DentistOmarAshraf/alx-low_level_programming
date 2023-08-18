#include <stdarg.h>
#include "variadic_function.h"

void print_all(const char * const format,...)
{
	va_list args;
	char *sep = ", ";
	int i;

	i = 0
	while (*format != '\0')
		i++;
	
