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
	int len;

	temp = (list_t *)h;
	print = 0;

	while (temp)
	{
		if (temp->str == NULL)
			len = 0;
		else
			for (len = 0; temp->str[len] ; len++)
				;
		printf("[%d] %s\n",len, (temp->str ? temp->str : "(nil)"));
		temp = temp->next;
		print++;
		len = 0;
	}
	return (print);
}
