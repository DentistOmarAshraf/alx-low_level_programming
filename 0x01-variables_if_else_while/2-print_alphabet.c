#include<stdio.h>
/**
 * main - Entry Point
 *
 * Description: This putchar task
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char x;

	for (x = 'a' ; x <= 'z' ; x++)
	{
		putchar(x);
	}
	putchar('\n');

	return (0);
}