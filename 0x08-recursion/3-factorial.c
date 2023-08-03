#include "main.h"
/**
 * factorial - calculate factorial of the number recur
 * @n: number to be calculated
 * Return: intger
 */

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
