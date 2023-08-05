#include "main.h"
/**
 * _islower - check with ASCII guide
 * @c: any char turn to int
 * Descrption: check for uppercasee char
 * Return: (0) if @c is upper (1) if @c is lower
 */

int _islower(int c)
{
	if (c > 97 && c < 122)
	{
		return (1);
	}
		return (0);
}
