#include "lists.h"

int main(void)
{
	int i, x;
	dlistint_t *head;

	head = NULL;
	for (i = 0 ; i < 2 ; i++)
		add_dnodeint_end(&head, i);
/*	add_dnodeint_end(&head, 98);
	add_dnodeint_end(&head, 402);
	add_dnodeint_end(&head, 1024);*/
	print_dlistint(head);
	printf("-----------------\n");
	x = delete_dnodeint_at_index(&head, 1);
	printf("x = (%d)\n", x);
	print_dlistint(head);
	printf("------------------\n");
	x = delete_dnodeint_at_index(&head, 1);
	printf("x = (%d)\n", x);
	print_dlistint(head);
	printf("---------------------\n");
	x = delete_dnodeint_at_index(&head, 0);
	printf("x = (%d)\n", x);
	printf("---------------------------------\n");
	print_dlistint(head);
/*	printf("-----------------\n");
	x = delete_dnodeint_at_index(&head, 5);
	printf("x = (%d)\n", x);
	print_dlistint(head);
	printf("-----------------\n");
	delete_dnodeint_at_index(&head, 0);
	print_dlistint(head);
	printf("-----------------\n");
	delete_dnodeint_at_index(&head, 0);
	print_dlistint(head);
	printf("-----------------\n");
	delete_dnodeint_at_index(&head, 0);
	print_dlistint(head);
	printf("-----------------\n");
	delete_dnodeint_at_index(&head, 0);
	print_dlistint(head);
	printf("-----------------\n");
	delete_dnodeint_at_index(&head, 0);
	print_dlistint(head);
	printf("-----------------\n");
	delete_dnodeint_at_index(&head, 0);
	printf("-----------------\n");
	x = delete_dnodeint_at_index(&head, 0);
	printf("x = (%d)\n", x);
	printf("-----------------\n");
	print_dlistint(head);*/
	return (0);
}
