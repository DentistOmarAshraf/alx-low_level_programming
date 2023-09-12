#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - free malloced memo
 * @d: struct dog
 * Return: NONE
 */

void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
