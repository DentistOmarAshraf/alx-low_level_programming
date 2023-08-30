#include "main.h"

/**
 * _prime - found prime number
 * @x: int
 * @y: int
 * Return: (1) if prime (0) if not
 */

int _prime(int x, int y)
{
	if (y == x)
		return (1);
	if (x % y == 0)
		return (0);
	return (_prime(x, y + 1));
}

/**
 * is_prime_number - found if the number is prime or not
 * @n: int
 * Return: (1) if prime (0) if not
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (_prime(n, 2));
}
