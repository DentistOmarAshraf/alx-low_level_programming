#include "list.h"
#include <stdio.h>

/**
 * print_list - print nodes of linked list
 * @h: struct list_s
 * Return: size_t
 */
size_t print_list(const list_t *h)
{
	size_t print;
	list_t *temp;

	temp = (list_t *)h;
	print = 0;

	while (temp)
	{
		printf("[%d] %s\n", temp->len, (temp->str ? temp->str : "(nil)"));
		temp = temp->next;
		print++;
	}
	return (print);
}
