#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - entry point
 * @argc: number of argments
 * @argv: array of arrgments
 * Return: int
 */

int main(int argc, char *argv[])
{
	unsigned long mul;
	int x, y;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	else
	{
		mul = 1;
		for (x = 1 ; x < argc ; x++)
		{
			for (y = 0 ; argv[x][y] != '\0' ; y++)
			{
				if (argv[x][y] > 57 || argv[x][y] < 48)
				{
					printf("Error\n");
					exit(98);
				}
			}
		}
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%lu\n", mul);
	}
	return (0);
}
