#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - delete node and return its value
 * @head: pointer of pointer of listint_t
 * @index: unsigned int
 * Return: int (->n value)
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	int tosend;
	size_t i;
	listint_t *ptr;
	listint_t *dlt;

	ptr = *head;
	if (!index)
	{
		if (!(*head))
			return (0);
		tosend = (*head)->n;
		*head = (*head)->next;
		free(ptr);
		ptr = NULL;
		return (tosend);
	}
	for (i = 0 ; i < index - 1 ; i++)
	{
		ptr = ptr->next;
		if (!ptr)
			return (0);
	}
	dlt = ptr->next;
	ptr->next = ptr->next->next;
	tosend = dlt->n;
	free(dlt);
	return (tosend);
}
