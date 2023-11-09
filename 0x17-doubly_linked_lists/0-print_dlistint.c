#include "lists.h"

/**
 * print_dlistint - print and count nodes of D.link.list
 * @head: pointer to head of linked list
 * Return: size_t (count of nodes)
 */

size_t print_dlistint(const dlistint_t *head)
{
	size_t count = 0;
	const dlistint_t *ptr = head;

	while (ptr)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;
		count++;
	}
	return (count);
}
