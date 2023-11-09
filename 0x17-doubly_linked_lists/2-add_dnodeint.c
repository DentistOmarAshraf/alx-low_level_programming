#include "lists.h"
/**
 * add_dnodeint - function to add node to linked list
 * @head: pointer of pointer of head of linked list
 * @num: const int
 * Return: node if success Null if fail
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int num)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = num;
	new->prev = NULL;
	if (!*head)
	{
		new->next = NULL;
		*head = new;
		return (new);
	}
	new->next = *head;
	(*head)->prev = new;
	*head = new;
	return (new);
}
