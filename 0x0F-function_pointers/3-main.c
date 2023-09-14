#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: number of argments
 * @argv: 2d array
 * Return: Alwyas (0)
 */

int main(int argc, char *argv[])
{
	int (*f)(int, int);
	int res;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if ((argv[2][0] == '/' || argv[2][0] == '%') && (atoi(argv[3]) == 0))
	{
		printf("Error\n");
		exit(100);
	}
	f = get_op_func(argv[2]);
	if (f == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	res = f(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", res);

	return (0);
}
