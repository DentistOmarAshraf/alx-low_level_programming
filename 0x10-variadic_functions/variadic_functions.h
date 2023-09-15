#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
/**
 * struct opt - struct opt
 * @c: char
 * @f: function pointer
 */
typedef struct opt
{
	char c;
	void (*f)(va_list);
} opt_t;

#endif
