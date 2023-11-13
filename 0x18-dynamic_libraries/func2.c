#include "main.h"
/**
 * _isdigit - check if parameter is number or not
 * @c: int (accorfing to ascii)
 * Return: 1 if digit 0 if not
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
/**
 * _strlen - return string length
 * @s: pointer to str
 * Return: length of string
 */
int _strlen(char *s)
{
	if (!*s)
		return (0);
	return (1 + _strlen(s + 1));
}
/**
 * _puts - print to stdout
 * @s: pointer to str
 * Return: NONE
 */
void _puts(char *s)
{
	if (!*s)
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	puts(s + 1);
}
/**
 * _strcpy - copy str from src to dest
 * @dest: pointer of str (destination)
 * @src: pointer of str (source)
 * Return: char *
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0 ; src[i] ; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
/**
 * _atoi - string to integer
 * @s: pointer to str
 * Return: int
 */
int _atoi(char *s)
{
	int i, res, sign;

	sign = 1;
	res = 0;
	for (i = 0 ; s[i] ; i++)
	{
		if (s[i] == '-')
			sign *= -1;
		if (s[i] >= '0' && s[i] <= '9')
			res = (res * 10) + (s[i] - '0');
	}
	return (res * sign);
}
