#include "dog.h"
#include <stdio.h>

/**
 * print_dog - print the struct
 * @d: struct dog
 * Return: NONE
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	printf("Name: %s\n", ((d->name) ? d->name : "(nil)"));
	printf("Age: %f\n", ((d->age) ? d->age : 0));
	printf("Owner: %s\n", ((d->owner) ? d->owner : "(nil)"));
}
