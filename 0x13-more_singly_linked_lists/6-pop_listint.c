#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - function return value of head of list
 * and choping the head
 * @head: pointer of pointer to head of linked list
 * Return: int
 */

int pop_listint(listint_t **head)
{
	int value;
	listint_t *temp;

	value = (*head)->n;
	temp = *head;
	*head = (*head)->next;
	temp->next = NULL;
	free(temp);

	return (value);
}
