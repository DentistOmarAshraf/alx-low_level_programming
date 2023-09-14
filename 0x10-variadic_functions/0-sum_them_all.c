#include "variadic_functions.h"

/**
 * sum_them_all - sum indefinte param of int
 * @n: unsigned int
 * Return: int
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	int res;

	va_start(args, n);
	res = 0;
	for (i = 0 ; i < n ; i++)
		res += va_arg(args, int);
	va_end(args);
	return (res);
}
