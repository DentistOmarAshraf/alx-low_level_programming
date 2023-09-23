#include "lists.h"
#include <stdlib.h>
/**
 * free_list - free node list
 * @head: pointer to struct list_t
 * Return: NONE
 */

void free_list(list_t *head)
{
	if (head)
	{
		free_list(head->next);
		if (head->str)
			free(head->str);
		free(head);
	}
}
