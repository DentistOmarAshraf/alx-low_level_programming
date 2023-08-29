#include <stdio.h>
#include "main.h"

int main(void)
{
	char *s = "Hello, how's the weather today?";
	char *f = "weather";
	char *t;

	t = _strstr(s, f);
	printf("%s\n", t);

	return (0);
}
