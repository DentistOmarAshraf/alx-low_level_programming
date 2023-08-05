#include "main.h"
/**
 * _abs - compute the abs value of int
 * @n: int type
 * Return: absolute value of @n
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	else
	{
		return (n);
	}
}
