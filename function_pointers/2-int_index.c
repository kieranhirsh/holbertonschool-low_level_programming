#include <stddef.h>

/**
 * int_index - finds the first index of an array that passes a check
 * @array: the array
 * @size: the size of the array
 * @cmp: the function containing the check
 *
 * Return: -1 if failure
 *         the first index which passes otherwise
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int ii;

	if ((array != NULL) && (size != 0) && (cmp != NULL))
	{
		for (ii = 0 ; ii < size ; ii++)
		{
			if (cmp(array[ii]))
				return (ii);
		}
	}

	return (-1);
}

