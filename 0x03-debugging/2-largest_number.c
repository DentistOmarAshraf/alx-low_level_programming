#include "main.h"

/**
 * largest_number - return the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if ((a > b && b > c) || (a > c && c > b) || (a > b && b == c) || (a == b && b > c))
	{
		largest = a;
	}
	else if ((b > a && a > c) || (b > c && c > a) || (b > a && a == c) || (b == a && a > c))
	{
		largest = b;
	}
	else if ((c > b && b > a) || (c > a && a > b) || (c > b && a == b) || (c == b && b > a))
	{
		largest = c;
	}
	else if (a == b && b == c)
	{
		largest = a;
	}

	return (largest);
}
