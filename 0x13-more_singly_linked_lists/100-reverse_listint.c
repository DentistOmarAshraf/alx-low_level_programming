#include "lists.h"
#include <stdio.h>

/**
 * reverse_listint - reverseing linked list
 * @head: pointer of pointer of listint_t
 * Return: head of new list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *one;
	listint_t *two;

	one = NULL;
	while (*head)
	{
		two = (*head)->next;
		(*head)->next = one;
		one = *head;
		*head = two;
	}
	*head = one;

	return (*head);
}
