#include "main.h"

/**
 * get_bit - giting the bit at certin index;
 * @n: unsigned long int
 * @index: unsigned int
 * Return: bit (1 or 0) (-1) if error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;
	unsigned long int x;

	if (n == 0 && index < 64)
		return (0);
	x = n;
	for (i = 0 ; i < index ; i++)
	{
		if (!x)
			return (-1);
		x = x >> 1;
	}
	return (1 & x);
}

