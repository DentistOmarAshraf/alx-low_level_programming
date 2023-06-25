#include "main.h"
/**
 * print_alphabet - printing all alphabet in small
 * @void: no parametar needed
 * Description: printing alphabet
 * Return: no return type
 */

void print_alphabet(void)
	{
		char i;

		i = 'a';
		while (i <= 'z')
		{
			_putchar(i);
			i++;
		}
		_putchar('\n');
	}
