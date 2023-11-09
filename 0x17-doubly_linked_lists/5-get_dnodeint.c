#include "lists.h"

/**
 * get_dnodeint_at_index - getting node at certin index
 * @head: pointer of head of D.linked list
 * @idx: size_t (index)
 * Return: dlistint_t pointer
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, size_t idx)
{
	dlistint_t *ptr;
	size_t i;

	if (!head)
		return (NULL);
	ptr = head;
	if (!idx)
		return (ptr);
	for (i = 0 ; i < idx; i++)
	{
		ptr = ptr->next;
		if (!ptr)
			return (NULL);
	}
	return (ptr);
}

