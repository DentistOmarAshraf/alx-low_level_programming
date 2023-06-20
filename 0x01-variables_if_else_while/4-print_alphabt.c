#include<stdio.h>
/**
 * main - Entry Point
 *
 * Description: this loop nested by condation
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char x;

	for (x = 'a' ; x <= 'z' ; x++)
	{
		if (x == 'q' || x == 'e')
		{
			continue;
		}
		putchar (x);
	}
	putchar('\n');
	return (0);
}
