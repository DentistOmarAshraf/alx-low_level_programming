#include "main.h"

/**
 * get_bit - giting the bit at certin index;
 * @n: unsigned long int
 * @index: unsigned int
 * Return: bit (1 or 0) (-1) if error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);
	if (index == 0)
		return (n & 1);
	return (get_bit(n >> 1, index - 1));
}
