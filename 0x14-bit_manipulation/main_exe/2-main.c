#include <stdio.h>
#include <limits.h>
#include "main.h"

int main(void)
{
	int n;

	printf("%lu\n", ULONG_MAX);
	n = get_bit(1024, 10);
	printf("%d\n", n);
	n = get_bit(98, 1);
	printf("%d\n", n);
	n = get_bit(1024, 0);
	printf("%d\n", n);
	n = get_bit(0, 0);
	printf("%d\n", n);
	return (0);
}
