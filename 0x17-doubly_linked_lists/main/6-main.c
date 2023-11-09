#include "lists.h"

int main(void)
{
	int i, sum;
	dlistint_t *head;

	head = NULL;
	for (i = 0 ; i < 5 ; i++)
		add_dnodeint_end(&head, i);
	add_dnodeint_end(&head, 98);
	add_dnodeint_end(&head, 402);
	add_dnodeint_end(&head, 1024);

	sum = sum_dlistint(head);
	printf("sum ==> %d\n", sum);
	free_dlistint(head);
	head = NULL;
	return (0);
}
