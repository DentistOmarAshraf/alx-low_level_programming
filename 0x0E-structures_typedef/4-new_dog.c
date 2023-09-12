#include "dog.h"

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
	new->name = (name) ? name : "(nil)";
	new->age = (age) ? age : 0;
	new->owner = (owner) ? owner : "(nil)";
	return (new);
}
