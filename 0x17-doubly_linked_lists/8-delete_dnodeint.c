#include "lists.h"
/**
 * delete_dnodeint_at_index - del node at index
 * @head: pointer of pointer
 * @idx: size_t (index)
 * Return: 1 on success -1 on fail
 */

int delete_dnodeint_at_index(dlistint_t **head, size_t idx)
{
	size_t i;
	dlistint_t *ptr;
	dlistint_t *dlt;

	if (!*head)
		return (-1);
	if (!idx)
	{
		ptr = (*head)->next;
		(*head)->next = NULL;
		free(*head);
		*head = ptr;
		return (1);
	}
	ptr = *head;
	for (i = 0 ; i < idx - 1 ; i++)
	{
		ptr = ptr->next;
		if (!ptr)
			return (-1);
	}
	dlt = ptr->next;
	if (!dlt)
		return (-1);
	ptr->next = dlt->next;
	dlt->prev = NULL;
	free(dlt);
	dlt = NULL;
	return (1);

}
