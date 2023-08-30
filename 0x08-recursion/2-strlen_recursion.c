#include "main.h"

/**
 * _strlen_recursion - return string len
 * @s: pointer to str
 * Return: int number of elements
 */

int _strlen_recursion(char *s)
{
	if (!*s)
		return (1);
	return (1 + _strlen_recursion(s + 1));
}
