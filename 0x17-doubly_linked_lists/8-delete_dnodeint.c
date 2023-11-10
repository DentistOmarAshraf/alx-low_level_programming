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
	dlistint_t *ptr = *head;
	dlistint_t *dlt;

	if (!idx)
	{
		if (!(*head))
			return (-1);
		*head = (*head)->next;
		free(ptr);
		ptr = NULL;
		return (1);
	}
	for (i = 0 ; i < idx - 1 ; i++)
	{
		ptr = ptr->next;
		if(!ptr)
			return (-1);
	}
	dlt = ptr->next;
	ptr->next = ptr->next->next;
	free(dlt);
	return (1);
}
