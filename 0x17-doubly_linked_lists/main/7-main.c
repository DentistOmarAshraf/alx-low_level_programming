#include "lists.h"

int main(void)
{
	int i;
	dlistint_t *head;

	head = NULL;
	for (i = 0 ; i < 5 ; i++)
		add_dnodeint_end(&head, i);
	add_dnodeint_end(&head, 98);
	add_dnodeint_end(&head, 402);
	add_dnodeint_end(&head, 1024);
	print_dlistint(head);
	printf("---------------------\n");
	insert_dnodeint_at_index(&head, 1, 4096);
	print_dlistint(head);
	free_dlistint(head);
	head = NULL;
	return (0);
}
