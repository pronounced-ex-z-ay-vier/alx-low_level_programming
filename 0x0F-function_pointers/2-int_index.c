#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - This searches for an int
 * @array: The array to search from
 * @size: The size of the array
 * @cmp: Function pointers
 */


int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) == 1)
			return (i);
	}
	return (-1);
}
