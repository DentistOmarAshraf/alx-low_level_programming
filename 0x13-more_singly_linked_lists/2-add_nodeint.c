#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - add a node to linked lists and make it head
 * @head: pointer of pointer to head - for changing the head in main
 * @n: int to be inserted in list
 * Return: pointer to struct NODE
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
