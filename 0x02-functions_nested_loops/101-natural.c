#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: natural numb
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int x, y;

	y = 0;
	for (x = 0 ; x < 1024 ; x++)
	{
		if ((x % 3 == 0) || (x % 5 == 0))
		{
			y += x;
		}
	}
	printf("%d\n", y);
	return (0);
}
