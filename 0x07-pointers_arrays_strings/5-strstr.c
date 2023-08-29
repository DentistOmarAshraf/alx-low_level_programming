#include "main.h"
/**
 * _strstr - find first pccurance in str
 * @haystack: pointer to str
 * @needle: pointer to str
 * Return: pointer to str
 */

char *_strstr(char *haystack, char *needle)
{
	int x, y;

	for (x = 0 ; haystack[x] != '\0' ; x++)
	{
		for (y = 0 ; needle[y] != '\0' && haystack[x + y] == needle[y] ; y++)
			if (haystack[x + y] != needle[y])
				break;
		if (needle[y] == '\0')
			return (haystack + x);
	}
	return (NULL);
}
