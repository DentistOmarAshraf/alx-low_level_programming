#include "3-calc.h"
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: number of argments
 * @argv: 2d array of argments
 * Return: on success 0
 */

int main(int argc, char *argv[])
{
	int a, b, res;
	char *s;

	if (argc != 4)
	{
		printf("Error\n");
		return (0);
	}
	else
	{
		a = atoi(argv[1]);
		b = atoi(argv[3]);
		s = (argv[2]);
		res = (*get_op_func(s))(a, b);
		printf("%d\n", res);
	}
	return (0);
}
