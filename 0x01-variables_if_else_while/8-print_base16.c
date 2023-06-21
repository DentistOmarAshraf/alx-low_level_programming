#include<stdio.h>
/**
 * main -Entry Point
 *
 * Description: for loop
 *
 * Return: Alwyas 0 (Success)
 */
int main(void)
{
	int x;

	for (x = 0 ; x < 10 ; x++)
	{
		putchar((x % 10) + '0');
	}
	for (x = 'a' ; x <= 'f' ; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
