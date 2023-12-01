#include <stdio.h>
#include "hash_tables.h"

int main(void)
{
	unsigned long int i;

	i = key_index("cisfun", 1024);
	printf("%lu\n", i);
	i = key_index("Don't forget to tweet today", 1024);
	printf("%lu\n", i);
	i = key_index("98", 1024);
	printf("%lu\n", i);

	return (0);
}
