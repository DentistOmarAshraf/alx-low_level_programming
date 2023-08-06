#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argc: number of arrgment passed
 * @argv: array hold arrgments
 * Return: Alwyas (0)
 */

int main(int argc, char *argv[])
{
	int i, sum;
	
	if(argc < 3)
	{
		printf("Error\n");
	}
	else
	{
		sum = 0;
		for (i = 1 ; i < argc ; i++)
		{
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	return (0);
}
