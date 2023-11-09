#include "lists.h"

/**
 * sum_dlistint - sum the int element of all nodes in linked list
 * @head: pointer to head of linked list
 * Return: int
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
