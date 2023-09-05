#include "main.h"

/**
 * create_array - create array of one char
 * @size: size of array
 * @c: char
 * Return: pointer to array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *str;

	str = malloc(sizeof(*str) * size);
	if (str == NULL)
		return (NULL);
	for (i = 0 ; i < size ; i++)
		str[i] = c;
	str[i] = '\0';
	return (str);
}
