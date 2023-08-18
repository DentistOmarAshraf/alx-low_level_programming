#include "variadic_functions.h"
#include <stddef.h>
#include <stdio.h>
int main(void)
{
	print_numbers(NULL, 4, 0, 98, -1024, 402);
	printf("\n");
	print_numbers("; ",0);
	return (0);
}
