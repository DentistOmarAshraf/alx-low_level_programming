#include "main.h"

/**
 * clear_bit - changing the byte to 0
 * @n: unsigned long int (pointer to int)
 * @index: unsigned int
 * Return: (1) if success (-1) fail
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	int add;

	if (index > 63)
		return (-1);
	add = 1 << index;
	*n = *n & (~add);
	return (1);
}
