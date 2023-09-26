#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserting node at certin index
 * @head: pointer of pointer of listint_t
 * @idx: size_t (index)
 * @n: value to be inserted
 * Return: pointer of linked list
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr;
	listint_t *new;
	unsigned int i;

	ptr = *head;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = ptr;
		*head = new;
		return (new);
	}
	if (!ptr)
	{
		ptr = new;
		ptr->next = NULL;
		return (new);
	}
	for (i = 0 ; i < idx - 1 ; i++)
	{
		ptr = ptr->next;
		if (!(ptr))
			return (NULL);
	}
	new->next = ptr->next;
	ptr->next = new;

	return (new);
}
