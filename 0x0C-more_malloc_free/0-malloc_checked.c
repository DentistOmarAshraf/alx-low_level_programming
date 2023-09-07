#include "main.h"

/**
 * malloc_checked - return pointer to allocated memo
 * @b: byte
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
