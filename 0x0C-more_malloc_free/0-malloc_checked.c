#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - function return void pointer
 * @b: size of memo
 * Return: void pointer
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);

	return (ptr);
}
