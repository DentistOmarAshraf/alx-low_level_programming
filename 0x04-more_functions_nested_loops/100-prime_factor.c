#include <stdio.h>
/**
 * main - Entry Point
 *
 * Description: find largest prime number
 *
 * Return: Alwyas 0 (Success)
 */

int main(void)
{
	long int x, y;

	x = 612852475143;

	for (y = 2 ; x > y ; y++)
	{
		if (x % y == 0)
		{
			x = x / y;
		}
	}
	printf("%ld\n", y);
	return (0);
}
