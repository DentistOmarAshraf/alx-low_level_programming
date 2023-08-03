#include "main.h"
/**
 * _strlen_recursion - count the array element
 * @s: string array
 * Return: int number
 */
int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (1 + _strlen_recursion(s + 1));
	}
	else
	{
		return (0);
	}
}
