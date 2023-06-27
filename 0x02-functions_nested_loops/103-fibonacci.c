#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: fabiona
 *
 * Retrun: Alwyas 0 (Success)
 */

int main(void)
{
	int x;
	unsigned long y, z, sum;
	y = 0;
	z = 1;

	for (x = 0 ; x <= 50 ; x++)
	{
		sum = y + z;
		y = z;
		z = sum;
		
		if (sum < 4000000)
		{
			printf(", ");
			printf("%lu" ,sum);
		}
		else
		{
			printf("\n");
			break;
		}
	}
}
