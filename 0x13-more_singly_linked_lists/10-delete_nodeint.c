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
	size_t i;
	listint_t *ptr;
	listint_t *dlt;

	ptr = *head;
	if (!index)
	{
		if (!(*head))
			return (-1);
		*head = (*head)->next;
		free(ptr);
		ptr = NULL;
		return (1);
	}
	for (i = 0 ; i < index - 1 ; i++)
	{
		ptr = ptr->next;
		if (!ptr)
			return (-1);
	}
	dlt = ptr->next;
	ptr->next = ptr->next->next;
	free(dlt);
	return (1);
}
