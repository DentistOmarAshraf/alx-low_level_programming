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
	void *ptrnull;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		ptrnull = malloc(new_size);
		if (ptrnull == NULL)
			return (NULL);
	}
	if (ptr != NULL && new_size == 0)
		free(ptr);
	old = malloc(old_size);
	if (old == NULL)
		return (NULL);
	old = (char *)ptr;

	new = malloc(new_size);
	if (new == NULL)
		return (NULL);

	for (i = 0 ; i <= old_size ; i++)
		new[i] = old[i];
	free(old);
	tosend = malloc(new_size);
	if (tosend == NULL)
		return (NULL);
	tosend = (void *)new;
	free(new);
	return (tosend);
}
