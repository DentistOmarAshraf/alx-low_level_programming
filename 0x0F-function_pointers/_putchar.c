#include <unistd.h>
#include "function_pointer.h"

int _putchar(char c)
{
	return (write(1, &c, 1));
}
