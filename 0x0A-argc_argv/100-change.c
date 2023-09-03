#include <stdio.h>

/**
 * _isdigit - check in the str if its number or not
 * @str: pointer to str
 * Return: 1 if number 0 if not
 */

int _isdigit(char *str)
{
	int i;

	for (i = 0 ; str[i] != '\0' ; i++)
	{
		if (str[i] >= '0' && str[i] <= '9')
			continue;
		else
			return (0);
	}
	return (1);
}

/**
 * _atoi - change array numbers from char to int
 * @str: pointer to str
 * Return: number (int)
 */

int _atoi(char *str)
{
	int i, res, sign;

	res = 0;
	sign = 1;
	for (i = 0 ; str[i] != '\0' ; i++)
	{
		if (str[i] == '-')
			sign *= -1;
		if (str[i] >= '0' && str[i] <= '9')
			res = (res * 10) + (str[i] - '0');
	}
	return (res * sign);
}

/**
 * main - Entry point
 * @argc: number of elements of argv array
 * @argv: 2d array of args
 * Return: Alwyas (0)
 */

int main(int argc, char *argv[])
{
	int n, i, res, temp;

	if (argc != 2 || !(_isdigit(argv[1])))
	{
		printf("Error\n");
		return (-1);
	}
	n = _atoi(argv[1]);
	res = 0;
	for (i = 0 ; n > 0 ; i++)
	{
		if (n >= 25)
			res += n / 25;
			temp = n / 25;
			n -= (temp * 25);
		if (n >= 10)
			res += n / 10;
			temp = n / 10;
			n -= (temp * 10);
		if (n >= 5)
			res += n / 5;
			temp = n / 5;
			n -= (temp * 5);
		if (n >= 2)
			res += n / 2;
			temp = n / 2;
			n -= (temp * 2);
		if (n == 1)
			res += 1;
			n -= 1;
	}
	printf("%d\n", res);
	return (0);
}
