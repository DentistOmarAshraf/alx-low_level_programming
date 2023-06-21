#include<stdio.h>
/**
 * main -Entry Point
 *
 * Description: for loop for print alphabit reversed
 *
 * Return: Alwyas 0 (Success)
 */
int main(void)
{
	char x;

	for (x = 'z' ; x >= 'a' ; x--)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
