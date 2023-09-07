#include "main.h"

/**
 * _calloc - memory allocation
 * @nmemb: int (sizeof data type)
 * @size: int
 * Return: void pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	unsigned int *ptr;

	if (nmemb == 0 || size == 0)
		exit(98);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		exit(98);
	for (i = 0 ; i < size ; i++)
		ptr[i] = 0;
	return (ptr);
}
