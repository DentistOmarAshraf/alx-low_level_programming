#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * main - entry point
 * @argc: number of argments
 * @argv: array of arrgments
 * Return: int
 */

int main(int argc, char *argv[])
{
	unsigned long mul;
	int x, y, length;
	char *temp;

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
			temp = argv[x];
			length = strlen(temp);
			for (y = 0 ; y < length ; y++)
			{
				if (isdigit(temp[y]) == 0)
				{
					printf("Error\n");
					exit(98);
				}
			}
			mul *= atoi(temp);
		}
		printf("%lu\n", mul);
	}
	return (0);
}
