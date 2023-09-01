#include <stdio.h>

/**
 * _atoi - charnge char to int
 * @str: pointer to str
 * Return: int
 */

int _atoi(char *str)
{
	int i, n, sign;

	n = 0;
	sign = 1;
	for (i = 0 ; str[i] != '\0' ; i++)
	{
		if (str[i] == '-')
			sign *= -1;
		if (str[i] >= '0' && str[i] <= '9')
			n = (n * 10) + (str[i] - '0');
	}
	return (n * sign);
}

/**
 * main - entry point
 * @argc: number of args
 * @argv: 2d array of args
 * Return: Alwyas (0)
 */

int main(int argc, char *argv[])
{
	int i, res;

	if (argc < 3)
	{
		printf("Error\n");
		return (-1);
	}
	res = 1;
	for (i = 1 ; i < argc ; i++)
		res *= _atoi(argv[i]);
	printf("%d\n", res);

	return (0);
}
