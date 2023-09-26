#include "lists.h"

/**
 * sum_listint - sum of ->n of linked struct
 * @head: pointer to linked list
 * Return: int
 */

int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
