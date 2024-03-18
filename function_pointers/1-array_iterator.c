#include <stddef.h>

/**
 * print_name - prints a name
 * @name: the name to be printed
 * @f: the function that does the printing
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

