#include "main.h"
#include <stdio.h>

int main(void)
{
	char str[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\nhello world! hello-world 0123456hello world\thello world.hello world\n";
	char *ptr;
	char str2[] = "hello world! expect the best. Prepare for the worst. Capitalize on what comes.\nhello world! hello-world 0123456hello world\thello world.hello world\n";
	char *ptr2;
	ptr = cap_string(str);
	printf("%s", ptr);
	printf("%s\n\n", str);
	ptr2 = cap_string(str2);
	printf("%s",ptr2);
	return (0);
}
