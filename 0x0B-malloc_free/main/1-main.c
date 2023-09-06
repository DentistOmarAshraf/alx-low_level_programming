#include <stdio.h>
#include "main.h"

int main(void)
{
	char *s;
	
	s = _strdup("OMAR ALX SE");
	if (s == NULL)
	{
		printf("failed to allocate memo\n");
		return (1);
	}
	printf("%s\n", s);
	free(s);
	return (0);
}
