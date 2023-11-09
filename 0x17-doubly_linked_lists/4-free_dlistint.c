#include "lists.h"

/**
 * free_dlistint - freeing d.linked.list
 * @head: pointer of head of d.linked.list
 * Return: NONE
 */

void free_dlistint(dlistint_t *head)
{
	while (head->next)
	{
		head = head->next;
		free(head->prev);
	}
	free(head);
}
