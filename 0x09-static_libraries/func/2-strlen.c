#include "main.h"

/**
 * _strlen - return string len
 * @s: pointer to s
 * Return: int
 */

int _strlen(char *s)
{
	if (!*s)
		return (0);
	return (1 + _strlen(s + 1));
}
