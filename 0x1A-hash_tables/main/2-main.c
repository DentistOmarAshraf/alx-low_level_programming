#include <stdio.h>
#include "hash_tables.h"

int main(void)
{
	unsigned long int i;

	i = key_index((unsigned char *)"cisfun", 1024);
	printf("%lu\n", i);
	i = key_index((unsigned char *)"Don't forget to tweet today", 1024);
	printf("%lu\n", i);
	i = key_index((unsigned char *)"98", 1024);
	printf("%lu\n", i);

	return (0);
}
