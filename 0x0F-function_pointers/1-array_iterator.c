#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - This executes the function on each element of array
 * @array: The array
 * @size: The size of the array
 * @action: The function performed on each element of array
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
