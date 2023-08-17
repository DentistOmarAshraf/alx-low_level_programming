#include "function_pointers.h"
#define NULL 0
/**
 * print_name - function take function param and string array
 * @name: string Array
 * @f: function as user wan it
 * Return: void (none)
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	(*f)(name);
}
