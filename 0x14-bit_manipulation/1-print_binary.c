#include "main.h"
#include <stdlib.h>

/**
 * _count_bin - count how many binary should malloced
 * @x: unsigned int
 * Return: int
 */

int _count_bin(unsigned long int x)
{
	if (x / 2 == 0 && x % 2 == 0)
		return (0);
	return (1 + _count_bin(x / 2));
}

/**
 * print_binary - print number in binary system
 * @n: unsigned long int
 * Return: NONE
 */

void print_binary(unsigned long int n)
{
	int len, j;
	char c;
	char *s;
	unsigned long int num;

	num = n;
	if (n == 0)
	{
		c = '0';
		_putchar(c);
		return;
	}
	len = _count_bin(n);
	s = malloc(sizeof(char) * (len + 1));
	if (s == NULL)
		exit(98);
	for (j = 0 ; j < len ; j++)
	{
		s[j] = (num % 2) + '0';
		num = num / 2;
	}
	s[j] = '\0';
	for (j = len - 1 ; j >= 0 ; j--)
		_putchar(s[j]);
	free(s);
}
