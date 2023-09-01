#include <stdio.h>

/**
 * main - Entry point
 * @argc: number of args
 * @argv: 2d array of args
 * Return: Alwyas(0)
 */

int main(int argc, char *argv[])
{
	int x;

	x = argc - 1;
	printf("%s\n", argv[x]);

	return (0);
}
