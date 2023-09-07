#include "main.h"

/**
 * _realloc - ...
 * @ptr: void pointer
 * @old_size: old size malloced
 * @new_size: to be re-allocated
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *temp;
	char *ptr2 =(char *)ptr;

	temp = malloc(old_size);
	if (temp == NULL)
		return (NULL);
	for (i = 0 ; i < old_size ; i++)
		*(temp + i) = *(ptr2 + i);
	free(ptr);
	ptr = malloc(new_size);
	if (ptr == NULL)
		return (NULL);
	for (i = 0 ; i < new_size ; i++)
		*(ptr2 + i) = *(temp + i);
	free(temp);
	return (ptr2);
}
