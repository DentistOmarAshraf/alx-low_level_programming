#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - free lists of struct
 * @head: pointer of pointer
 * Return: NONE
 */

void free_listint2(listint_t **head)
{
	if (*head)
	{
		free_listint2(&((*head)->next));
		free(*head);
	}
}
