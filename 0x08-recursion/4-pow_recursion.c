#include "main.h"
/**
 * _pow_recursion - return the x powerd by y
 * @x: the number to be poewred
 * @y: number of times
 * Return: on succuess 1 on fail -1
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	else if (y < 0)
	{
		return (-1);
	}
	else
	{
	return (x * _pow_recursion(x, y - 1));
	}
}
