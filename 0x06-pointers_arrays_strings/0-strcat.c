#include "main.h"
/**
 * _strcat - 
 * @dest:
 * @src
 * return: char
 */
char *_strcat(char *dest, char *src)
{
	int destlen, srclen , con;
	char 

	destlen = 0;
	srclen = 0;
	while (dest[destlen] != '\0' || dest[destlen] != " ")
	{
		destlen++;
	}
	while (src[srclen] !='\0')
	{
		srclen++;
	}

	con = destlen + srclen + 1;


