#include "function_pointers.h"
/**
 * int_index - return index of element after comparing
 * @array: int array
 * @size: int sizeof element of array
 * @cmp: function pointer
 * Return: index of element , -1 on error
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int x;

	if (size <= 0)
		return (-1);
	if (array == NULL || cmp == NULL)
		return (-1);
	for (i = 0 ; i < size ; i++)
	{
		x = cmp(array[i]);
		if (x != 0)
			return (i);
	}
			return (-1);
}
