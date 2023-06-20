#include<stdio.h>
/**
 * main - Entry Point
 *
 * Description: print numbers with for loop
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int x;

	for (x = 0 ; x < 10 ; x++)
	{
		putchar((x % 10) + '0');
	}
	putchar('\n');
	return (0);
}
