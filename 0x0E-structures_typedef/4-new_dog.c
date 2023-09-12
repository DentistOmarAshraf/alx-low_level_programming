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
	char *namecp;
	char *ownercp;

	new = malloc(sizeof(dog_t));
	if (new == NULL)
		return (NULL);
	namecp = _strcpy(name);
	(void) namecp;
	ownercp = _strcpy(owner);
	(void) ownercp;
	new->name = (name) ? name : "(nil)";
	new->age = (age) ? age : 0;
	new->owner = (owner) ? owner : "(nil)";
	return (new);
}
