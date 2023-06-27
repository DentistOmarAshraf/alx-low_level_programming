#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: fabiona
 *
 * Return: Alwyas 0 (Success)
 */

int main(void)
{
	int x;
	unsigned long int y, z, sum, next;

	y = 1;
	z = 2;
	sum = 0;

	for (x = 0 ; x <= 32 ; x++)
	{
		if (sum < 4000000 && (y % 2) == 0)
		{
			sum = sum + y;
		}
		next = y + z;
		y = z;
		z = next;
	}

	printf("%lu\n", sum);

	return (0);
}
