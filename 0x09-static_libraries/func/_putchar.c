#include "main.h"
#include <unistd.h>

/**
 * _putchar - print each char
 * @c: character
 * Return: 1 on success, -1 on fail
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
