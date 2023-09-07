#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void simple_print_buffer(int *buffer, unsigned int size)
{
	unsigned int i;

	for (i = 0 ; i < size ; i++)
	{
		if (i % 10)
			printf(" ");
		if (i && !(i % 10))
			printf("\n");
		printf("%d", buffer[i]);
	}
	printf("\n");
}
int main(void)
{
	int *a;

	a = array_range(0, 11);
	if (a == NULL)
	{
		printf("NULL\n");
		return (1);
	}
	simple_print_buffer(a, 12);
	free(a);
	return (0);
}
