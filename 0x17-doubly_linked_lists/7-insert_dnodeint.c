#include "lists.h"
/**
 * list_size - healper function
 * @head: pointer of d.linked list
 * Return: size_t
 */
size_t list_size(dlistint_t *head)
{
	size_t len = 0;

	while (head)
	{
		head = head->next;
		len++;
	}
	return (len);
}
/**
 * insert_dnodeint_at_index - insert node at certin index
 * @head: pointer of pointer of d. linked list
 * @idx: index
 * @num: int
 * Return: new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **head, size_t idx, int num)
{
	dlistint_t *new;
	dlistint_t *ptr;
	size_t i;

	if (!idx || !*head)
	{
		new = add_dnodeint(head, num);
		return (new);
	}
	if (idx == list_size(*head) || idx > list_size(*head))
	{
		new = add_dnodeint_end(head, num);
		return (new);
	}
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = num;
	ptr = *head;
	for (i = 0 ; i < idx ; i++)
		ptr = ptr->next;
	new->prev = ptr->prev;
	new->next = ptr;
	ptr->prev->next = new;
	ptr->prev = new;
	return (new);
}
