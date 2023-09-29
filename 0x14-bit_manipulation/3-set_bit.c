#include "main.h"

/**
 * set_bit - changing the bit of number
 * @n: pointer unsigned long int
 * @index: unsigned int
 * Return: 1 if succuess -1 if error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	int add;

	if (index > 63)
		return (-1);
	add = 1 << index;
	*n = *n | add;
	return (1);
}
