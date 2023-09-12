#include "dog.h"
#include <stdio.h>

int main(void)
{
	struct dog my_dog;

	init_dog(&my_dog, "poopy", 3.5, "boob");
	printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog.name, my_dog.age);
	return (0);
}
