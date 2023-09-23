#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - and node to the end of list_t
 * @head: pointer to pointer
 * @str: pointer to str
 * Return: pointer to list_t
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *ptr;
	size_t len;

	for (len = 0 ; str[len] ; len++)
		;
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = len;
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
