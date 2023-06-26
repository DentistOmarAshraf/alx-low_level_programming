#include "main.h"
/**
 * _abs - give absoulute of number
 * @n: number
 *
 * Descripition: give Abs of number
 *
 * Return: abs value
 */

int _abs(int n)
{
	int abs;

	if (n > 0)
	{
		abs = n;
		return (abs);
	}
	else if (n < 0)
	{
		abs = n * -1;
		return (abs);
	}
	else
	{
		return (n);
	}
}
