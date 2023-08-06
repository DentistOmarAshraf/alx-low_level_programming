#include <stdio.h>
/**
 * main - entry point
 * @argc: number of argement passed
 * @argv: array contain all arrgment passed
 * Return: Alwyas (0) Success
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0 ; i < argc ; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
