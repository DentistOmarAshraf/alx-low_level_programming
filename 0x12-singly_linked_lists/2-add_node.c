#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node - fucntion to add node to the head of linked list
 * @head: list_t pointer of pointer
 * @str: pointer to str
 * Return: pointer to list_t struct
 */

list_t *add_node(list_t **head, const char *str)
{
	size_t len;
	list_t *new;

	for (len = 0 ; str[len] ; len++)
		;
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = len;
	new->next = *head;
	*head = new;

	return (new);
}
