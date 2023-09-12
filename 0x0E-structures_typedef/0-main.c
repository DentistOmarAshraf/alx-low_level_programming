#include <stdio.h>
#include "dog.h"

int main(void)
{
	struct dog my_dog;

	my_dog.name = "poopy";
	my_dog.age = 3.5;
	my_dog.owner = "bob";
	printf("%s\n%s\n", my_dog.name, my_dog.owner);
	return (0);
}
