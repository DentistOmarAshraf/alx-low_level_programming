#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

int main(void)
{
	listint_t *head;
	listint_t *node;

	head = NULL;
	add_nodeint_end(&head, 93444);
	add_nodeint_end(&head, 1);
	add_nodeint_end(&head, 2);
	add_nodeint_end(&head, 3);
	add_nodeint_end(&head, 4);
	add_nodeint_end(&head, 98);
	add_nodeint_end(&head, 402);
	add_nodeint_end(&head, 1024);
	print_listint(head);
	node = get_nodeint_at_index(head , 5);
	if (node == NULL)
	{
		printf("ERRor\n");
		return (1);
	}
	printf("node is %d\n", node->n);
	printf("_____________________________\n");
	print_listint(head);
	free_listint2(&head);
	return (0);
}
