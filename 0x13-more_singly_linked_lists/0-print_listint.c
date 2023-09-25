#include "lists.h"
#include <stdio.h>

/**
 * print_listint - printing linked list
 * @h: pointer to struct
 * Return: size_t (unsigned int)
 */

size_t print_listint(const listint_t *h)
{
	size_t count;

	for (count = 0 ; h != NULL ; count++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (count);
}
