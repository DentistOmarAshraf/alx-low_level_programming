#include "main.h"

/**
 * _calloc - memory allocation
 * @nmemb: int (sizeof data type)
 * @size: int
 * Return: void pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	for (i = 0 ; i < size * nmemb ; i++)
		ptr[i] = 0;
	return (ptr);
}
