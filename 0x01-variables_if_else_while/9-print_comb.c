#include<stdio.h>
/**
 * main - Entry Point
 *
 * Description: print numbers followed by ,
 *
 * Return: Alwyas 0 (Success)
 */
int main(void)
{
	int x;

	for (x = 0 ; x < 10 ; x++)
	{
		putchar(x + '0');
		if (x == 9)
			continue;
		putchar(44);
		putchar(32);
		}
	putchar('\n');
	return (0);
}
