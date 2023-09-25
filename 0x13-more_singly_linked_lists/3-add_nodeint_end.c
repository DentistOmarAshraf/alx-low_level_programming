#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - add node at the end of linked list
 * @head: pointer to pointer of struct linked list
 * @n: int
 * Return: pointer to struct
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr;
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	ptr = *head;
	while (ptr->next)
		ptr = ptr->next;
	ptr->next = new;
	return (new);
}
