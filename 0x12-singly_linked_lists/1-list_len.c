#include "lists.h"

/**
 * list_len - show how many items in the lists
 * @h: struct list_s
 * Return: size_t
 */

size_t list_len(const list_t *h)
{
	list_t *temp;
	size_t items;

	temp = (list_t *)h;
	for (items = 0 ; temp ; temp = temp->next, items++)
		;
	return (items);
}
