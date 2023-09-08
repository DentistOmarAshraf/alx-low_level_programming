#include <stdio.h>
#include "main.h"
#include <string.h>

void simple_print_buffer(char *buffer, unsigned int size)
{
	unsigned int i;

	for (i = 0 ; i < size ; i++)
	{
		if (i % 10)
			printf(" ");
		if (i && !(i % 10))
			printf("\n");
		printf("0x%02x", buffer[i]);
	}
	printf("\n");
}

int main(void)
{
	char *p;
	int i;

	p = malloc(sizeof(char) * 30);
	p = _realloc(p, sizeof(char) * 30, sizeof(char) * 120);

	i = 0;
	while (i < 30)
	{
		p[i++] = 98;
	}
	simple_print_buffer(p, 120);
	free(p);
	return (0);
}
