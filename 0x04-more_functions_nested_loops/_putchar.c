#include <unistd.h>
/**
 * _putchar - write to stdout
 * @c: the charachter to print
 *
 * Return: on Success 1.
 * On error, -1 is returned , errno is set appropriatly.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
