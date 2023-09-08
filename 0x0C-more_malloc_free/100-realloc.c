#include "main.h"

/**
 * _realloc - reallocation of memo
 * @ptr: void pointer
 * @old_size: old size malloced
 * @new_size: to be re-allocated
 * Return: void pointer
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *old;
	char *new;
	void *tosend;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
		return (malloc(new_size));
	if (ptr != NULL && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	old = (char *)ptr;
	new = malloc(new_size);
	if (new == NULL)
		return (NULL);
	if (new_size > old_size)
	{
		for (i = 0 ; i < old_size ; i++)
			new[i] = old[i];
	}
	else
		for (i = 0 ; i < new_size ; i++)
			new[i] = old[i];
	free(old);
	tosend = (void *)new;
	return (tosend);
}
