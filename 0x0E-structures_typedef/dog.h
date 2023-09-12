#ifndef DOG_H
#define DOG_H
#include <stdlib.h>

/**
 * struct dog - dog data
 * @name: pointer to char
 * @age: float
 * @owner: pointer to char
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
