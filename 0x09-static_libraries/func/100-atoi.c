#include "main.h"

/**
 * _atoi - change number in string to int
 * @s: pointer to str
 * Return: int
 */

int _atoi(char *s)
{
	int i, n, sign;

	n = 0;
	sign = 1;
	for (i = 0 ; s[i] != '\0' ; i++)
	{
		if (s[i] == '-')
			sign *= -1;
		if (s[i] >= '0' && s[i] <= '9')
			n = (n * 10) + s[i] - '0';
	}
	return (n * sign);
}
