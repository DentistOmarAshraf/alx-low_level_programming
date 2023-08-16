#include "dog.h"
#include <stdlib.h>

int _strlen(char *s);
char *_strcpy(char *dest, char *src);
/**
 * new_dog - define new struc
 * @name: name of the dog
 * @age: age of dog
 * @owner: owner of dug
 * Return: new structure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;
	int namelen, ownerlen;

	if (name != NULL || owner != NULL)
	{
		namelen = _strlen(name) + 1;
		ownerlen = _strlen(owner) + 1;
		new = malloc(sizeof(dog_t));
		if (new == NULL)
			return (NULL);
		new->name = malloc(sizeof(char) * namelen);
		if (new->name == NULL)
		{
			free(new);
			return (NULL);
		}
		new->owner = malloc(sizeof(char) * ownerlen);
		if (new->owner == NULL)
		{
			free(new->name);
			free(new);
			return (NULL);
		}
	new->name = _strcpy(new->name, name);
	new->owner = _strcpy(new->owner, owner);
	new->age = age;
	}
	return (new);
}
/**
 * _strlen - return length of str
 * @s: string Array
 * Return: int
 */
int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen(s + 1));
}
/**
 * _strcpy - return string array from src
 * @dest: destination
 * @src: source array
 * Return: array string
 */
char *_strcpy(char *dest, char *src)
{
	int len, i;

	len = _strlen(src) + 1;
	for (i = 0 ; i < len ; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
