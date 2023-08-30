#include "main.h"

/**
 * _sqrt - find sqroot of number
 * @x: int
 * @y: int
 * Return: (y) if y * y = x ; -1 if not found
 */

int _sqrt(int x, int y)
{
	if (y * y == x)
		return (y);
	if (y < 0)
		return (-1);
	return (_sqrt(x, y - 1));
}

/**
 * _sqrt_recursion - main function
 * @n: int
 * Return: sqrt on n
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt(n, n));
}
