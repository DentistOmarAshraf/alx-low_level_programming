#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - free all malloced list's nodes
 * @head: pointer to linked list
 * Return: NONE (VOID)
 */

void free_listint(listint_t *head)
{
	if (head)
	{
		free_listint(head->next);
		free(head);
	}
}
