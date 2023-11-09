#include "lists.h"

int main(void)
{
	int i;
	dlistint_t *head;
	dlistint_t *node;

	head = NULL;
	for (i = 0 ; i < 5 ; i++)
		add_dnodeint_end(&head, i);
	add_dnodeint_end(&head, 98);
	add_dnodeint_end(&head, 402);
	add_dnodeint_end(&head, 1024);

	print_dlistint(head);
	node = get_dnodeint_at_index(head, 5);
	printf("the node int is ==> %d\n", node ? node->n : 689453);
	free_dlistint(head);
	head = NULL;
	return (0);
}
