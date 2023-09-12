#include "dog.h"

/**
 * _strcpy - copy str
 * @s: pointer to char
 * Return: pointer to char
 */

char *_strcpy(char *s)
{
	char *new;
	int i, len;

	for (len = 0 ; s[len] ; len++)
		;
	new = malloc(sizeof(char) * (len + 1));
	if (new == NULL)
		return (NULL);
	for (i = 0; i < len ; i++)
		new[i] = s[i];
	new[i] = '\0';
	return (new);
}
/**
 * new_dog - create struct dog
 * @name: pointer to char
 * @age: float
 * @owner: pointer to char
 * Return: dog_t struct
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;

	new = malloc(sizeof(dog_t));
	if (new == NULL)
		return (NULL);
	new->name = _strcpy(name);
	if (new->name == NULL)
	{
		free(new);
		return (NULL);
	}
	new->age = (age) ? age : 0;
	new->owner = _strcpy(owner);
	if (new->owner == NULL)
	{
		free(new->name);
		free(new);
		return (NULL);
	}
	return (new);
}
