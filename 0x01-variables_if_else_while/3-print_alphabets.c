#include<stdio.h>
/**
 * main - Entry Point
 *
 * Description: This is for loop
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

	for (x = 'A' ; x <= 'Z' ; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
