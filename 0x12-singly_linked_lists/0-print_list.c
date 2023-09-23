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
	list_t *temp;
	size_t len;

	temp = (list_t *)h;
	print = 0;

	while (temp)
	{
		if (temp->str == NULL)
			temp->len = 0;
		else
			for (len = 0 ; temp->str[len] ; len++)
				temp->len = len + 1;
		printf("[%d] %s\n", temp->len, (temp->str ? temp->str : "(nil)"));
		temp = temp->next;
		print++;
	}
	return (print);
}
