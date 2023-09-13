#include "function_pointers.h"

/**
 * print_name - function that take pointer to function and char * as its par
 * @name: pointer to char
 * @f: pointer to function
 * Return: NONE
 */

void print_name(char *name, void(*f)(char *))
{
	if (name || f)
		f(name);
}
