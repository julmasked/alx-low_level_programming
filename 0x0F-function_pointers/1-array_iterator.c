#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - calls a function given a parameter on each element of array
 * @array: integer array
 * @size: size of the array
 * @action: function pointer
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;

	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}
