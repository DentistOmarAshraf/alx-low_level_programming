#include "main.h"

/**
 * _calloc - memory allocation
 * @nmemb: int (sizeof data type)
 * @size: int
 * Return: void pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
