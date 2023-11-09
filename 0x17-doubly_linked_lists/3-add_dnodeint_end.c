#include "lists.h"

/**
 * add_dnodeint_end - adding node to the tail of head
 * @head: poniter of pointer of head of linked list
 * @num: const int
 * Return: new node pointer
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int num)
{
	dlistint_t *new;
	dlistint_t *ptr;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = num;
	new->next = NULL;
	if (!*head)
	{
		*head = new;
		(*head)->prev = NULL;
		return (new);
	}
	ptr = *head;
	while (ptr->next)
		ptr = ptr->next;
	ptr->next = new;
	new->prev = ptr;
	return (new);
}
