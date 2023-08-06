#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argc: number of arrgment passed
 * @argv: array hold all arrgment
 * Return: Alwyas (0) Success
 */

int main(int argc, char *argv[])
{
	int i, mul;

	mul = 1;
	if (argc < 3)
	{
		printf("Error\n");
	}
	else
	{
		for (i = 1 ; i < argc ; i++)
		{
			mul *= atoi(argv[i]);
		}
		printf("%d\n", mul);
	}

	return (0);
}
