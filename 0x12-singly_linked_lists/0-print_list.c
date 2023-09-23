#include "lists.h"
#include <stdio.h>

/**
 * print_list - print nodes of linked list
 * @h: struct list_s
 * Return: size_t
 */
size_t print_list(const list_t *h)
{
	size_t print;

	print = 0;
	while (h)
	{
		printf("[%d] %s\n", (h->str ? h->len : 0), (h->str ? h->str : "(nil)"));
		h = h->next;
		print++;
	}
	return (print);
}
