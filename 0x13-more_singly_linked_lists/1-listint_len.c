#include "lists.h"

/**
 * listint_len - return Number of nodes in linked list
 * @h: pointer to the head of struct list
 * Return: size_t (unsigned int)
 */

size_t listint_len(const listint_t *h)
{
	size_t count;

	for (count = 0 ; h != NULL ; count++, h = h->next)
		;
	return (count);
}
