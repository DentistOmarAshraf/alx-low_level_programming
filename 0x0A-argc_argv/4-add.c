#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/**
 * main - entry point
 * @argc: number of arrgment passed
 * @argv: array hold arrgments
 * Return: Alwyas (0)
 */
int main(int argc, char *argv[])
{
	int x, y, sum, length;
	char *ptr;

	sum = 0;
	if (argc < 2)
	{
		printf("%d\n", sum);
	}
	else
	{
		for (x = 1 ; x < argc ; x++)
		{
			ptr = argv[x];
			length = strlen(ptr);
			for (y = 0; y < length ; y++)
			{
				if (isdigit(*(ptr + y)) == 0)
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[x]);
		}
		printf("%d\n", sum);
	}
	return (0);
}
