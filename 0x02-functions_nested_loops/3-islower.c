#include "main.h"
/**
 * _islower - check with ASCII guide
 * @c: any char turn to int
 *
 * Description: check for uppercase char
 *
 * Return: (0) if @c is uppercase , (1) if @c is lowercase
 */

int _islower(int c)
{
	if (c > 97 && c < 122)
	{
		return (1);
	}
		return (0);
}
