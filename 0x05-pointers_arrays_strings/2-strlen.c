#include "main.h"
/**
 * _strlen - count the array elements
 * count the string array elements
 * @s: string Array
 * Return: int value
 */
int _strlen(char *s)
{
	int i = 0;

	while (i < 99)
	{
		if (*(s + i) == '\0')
		{
			break;
		}
		else
		{
			i++;
		}
	}
	return (i);
}
