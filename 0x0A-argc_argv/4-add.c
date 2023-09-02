#include <stdio.h>
/**
 * _isdigit - return 1 if digit return 0 if not
 * Description: this function not the same isdigit (modified for char*)
 * @c: int
 * Return: 1 if digit 0 if not
 */
int _isdigit(char *c)
{
	int i;

	for (i = 0 ; c[i] != '\0' ; i++)
	{
		if (c[i] >= '0' && c[i] <= '9')
			continue;
		else
			return (0);
	}
	return (1);
}

/**
 * _atoi - change char to int
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
 * Return: (0) Alwyas
 */
int main(int argc, char *argv[])
{
	int i, res;

	if (argc <= 1)
	{
		printf("0\n");
		return (0);
	}
	res = 0;
	for (i = 1 ; i < argc ; i++)
	{
		if (_isdigit(argv[i]))
			res += _atoi(argv[i]);
		else
		{
			printf("Error\n");
			return (-1);
		}
	}
	printf("%d\n", res);
	return (0);
}
