#include "dog.h"
#include <stdlib.h>

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

	new = malloc(sizeof(dog_t));
	if (new == NULL)
		return (NULL);
	new->name = name;
	new->age = age;
	new->owner = owner;
	return (new);
}
