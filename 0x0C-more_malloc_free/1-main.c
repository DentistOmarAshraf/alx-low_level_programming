#include <stdio.h>
#include "main.h"


int main(void)
{
	char *concat;

	concat = string_nconcat("****************", "School !!!",10);
	printf("%s\n", concat);
	free(concat);
	return (0);
}
