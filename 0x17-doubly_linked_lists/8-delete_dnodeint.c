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
	if (idx == 0)
	{
		dlt = *head;
		*head = (*head)->next;
		if (*head)
			(*head)->prev = NULL;
		free(dlt);
		dlt = NULL;
		return (1);
	}
	ptr = *head;
	for (i = 0 ; i < idx - 1 ; i++)
	{
		ptr = ptr->next;
		if (!ptr)
			return (-1);
	}
	if (!ptr->next)
		return (-1);
	dlt = ptr->next;
	ptr->next = dlt->next;
	if (dlt->next)
		dlt->next->prev = ptr;
	free(dlt);
	dlt = NULL;
	return (1);

}
