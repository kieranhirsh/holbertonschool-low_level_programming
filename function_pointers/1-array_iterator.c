#include <stddef.h>
#include "function_pointers.h"

/**
 * array_iterator - evaluates a function for all elements of an array
 * @array: the array
 * @size: the size of the array
 * @action: the funcction
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t ii;

	if ((array != NULL) && (size != 0) && (action != NULL))
	{
		for (ii = 0 ; ii < size ; ii++)
			action(array[ii]);
	}
}

