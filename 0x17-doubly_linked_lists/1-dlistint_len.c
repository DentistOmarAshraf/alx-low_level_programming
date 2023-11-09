#include "lists.h"

/**
 * dlistint_len - function to count how many node in list
 * @head: pointer to the head of d.linked list
 * Return: size_t (count of nodes)
 */
size_t dlistint_len(const dlistint_t *head)
{
	size_t count = 0;
	const dlistint_t *ptr = head;

	while (ptr)
	{
		ptr = ptr->next;
		count++;
	}
	return (count);
}
