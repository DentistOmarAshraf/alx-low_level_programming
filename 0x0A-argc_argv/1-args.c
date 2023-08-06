#include <stdio.h>
/**
 * main - entry point
 * @argc: number of argment passed
 * @argv: array with the arrgments passed
 * Return: Always (0) Success
 */

int main(int argc, char *argv[])
{
	int i;

	if (argc == 1)
	{
		printf("%d\n", argc - 1);
	}
	else
	{
		for (i = 0 ; *argv ; argv++)
		{
			i++;
		}
		printf("%d\n", i - 1);
	}
	return (0);
}
