#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - free lists of struct
 * @head: pointer of pointer
 * Return: NONE
 */

void free_listint2(listint_t **head)
{
	if (*head && head)
	{
		free_listint2((&(*head)->next));
		if ((*head)->next)
			free((*head)->next);
		free(*head);
		*head = NULL;
	}
}
