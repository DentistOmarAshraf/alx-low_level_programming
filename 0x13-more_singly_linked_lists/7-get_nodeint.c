#include "lists.h"

/**
 * get_nodeint_at_index - getting node at index
 * @head: pointer to listint_t
 * @index: size_t
 * Return: pointer to listint_t (linked list node)
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t i;

	if (!head)
		return (NULL);
	for (i = 0 ; i < index && head->next ; i++)
		head = head->next;
	if (head)
		return (head);
	return (NULL);
}
