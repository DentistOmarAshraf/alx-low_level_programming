#include <stdio.h>

int main(void)
{
	char *name = "Omar";
	void *ptr;

	ptr = (void *)name;

	printf("%s\n", ptr);
	printf("void = %p\nchar = %p\n", ptr, name);

	return (0);
}
