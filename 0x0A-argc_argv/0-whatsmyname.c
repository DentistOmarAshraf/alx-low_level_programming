#include <stdio.h>
/**
 * main - entry point
 * @argc: number of arrgment passed
 * @argv: array contain all the arrgment passed
 * Return: Alwyas (0) Success
 */

int main(int argc, char *argv[])
{
	int x, i;

	x = argc;
	for (i = 0 ; i < x ; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
