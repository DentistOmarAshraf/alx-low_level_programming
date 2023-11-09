#include "lists.h"

int main(void)
{
	int i;
	dlistint_t *head;
	
	head = NULL;
	for (i = 0 ; i < 5; i++)
		add_dnodeint(&head, i);
	add_dnodeint(&head, 98);
	add_dnodeint(&head, 402);
	add_dnodeint(&head, 1024);
	print_dlistint(head);
	return (EXIT_SUCCESS);
}
