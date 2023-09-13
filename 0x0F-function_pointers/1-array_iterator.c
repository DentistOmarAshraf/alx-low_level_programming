#include "function_pointers.h"

/**
 * array_iterator - function iterate func pointer on array elements
 * @array: pointer to array
 * @size: unsigned int
 * @action: function pointer
 * Return: NONE
 */

void array_iterator(int *array, size_t size, void(*action)(int))
{
	size_t i;

	if (!array || !action || !size)
		return;

	for (i = 0 ; i < size ; i++)
		action(array[i]);
}
