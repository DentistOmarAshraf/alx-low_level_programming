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
	int (*opr)(int, int);
	char *s;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	s = (argv[2]);
	opr = get_op_func(s);
	if (opr == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if ((*s == '/' || *s == '%') && b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	res = opr(a, b);
	printf("%d\n", res);
	return (0);
}
