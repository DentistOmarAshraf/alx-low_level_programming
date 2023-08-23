#include <stdio.h>

int main(void)
{
	char c;
	char b;
	char e;

	c = '9';
	b = '1';
	e = '9';

	printf("%d\n", (((c*10) + b) * 10) + e);

	return (0);
}
