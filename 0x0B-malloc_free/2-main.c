#include "main.h"
#include <stdio.h>

int main(void)
{
	char *s;

	s = str_concat(NULL, NULL);
	if (s == NULL)
	{
		printf("Failed\n");
		return (1);
	}
	printf("%s\n", s);
	free(s);
	return (0);
}
