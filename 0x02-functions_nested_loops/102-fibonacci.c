#include<stdio.h>
/**
 * main -Entry point
 *
 * Description: fibonacci number
 *
 * Return: Alwyas 0 (Success)
 *
 */

int main(void)
{
	int x;
	unsigned long y, z, sum;

	y = 0;
	z = 1;

	for (x = 0; x < 50; x++)
	{
		sum = y + z;
		y = z;
		z = sum;
		printf("%lu", sum);

		if (x == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
