#include "main.h"
/**
 *print_alphabet_x10 - write alphabet 10 times
 *@void: no parameter
 *
 *Description: function file for alphabet 10X
 *
 * Return: On success 0
 */
void print_alphabet_x10(void)
{
	int i;

	i = 0;
	while (i < 10)
	{
		char alpha;

		alpha = 'a';
		while (alpha <= 'z')
		{
			_putchar(alpha);
			alpha++;
		}
		_putchar('\n');
		i++;
	}
}
