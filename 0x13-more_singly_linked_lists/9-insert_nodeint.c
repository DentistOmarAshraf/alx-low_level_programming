#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - insert node struct at certin index
 * @head: pointer of pointer of struct list
 * @idx: index size_t
 * @n: int
 * Return: new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	size_t i;
	listint_t *ptr;
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	if (!(*head))
	{
		*head = new;
		(*head)->next = NULL;
		return (new);
	}
	if (!idx)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	ptr = *head;
	for (i = 0 ; i < idx - 1 ; i++)
	{
		if (!ptr->next)
		{
			free(new);
			return (NULL);
		}
		ptr = ptr->next;
	}
	new->next = ptr->next;
	ptr->next = new;
	return (new);
}
