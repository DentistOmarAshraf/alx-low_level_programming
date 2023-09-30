#include "main.h"

/**
 * flip_bits - count how many bits ned to be flipped
 * @n: unsigned long int
 * @m: unsigned long int
 * Return: unsigned int (count of bits)
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count, x, y;

	count = 0;
	while (!(n == 0 && m == 0))
	{
		x = n & 1;
		y = m & 1;
		n = n >> 1;
		m = m >> 1;
		if (x != y)
			count++;
	}
	return (count);
}
