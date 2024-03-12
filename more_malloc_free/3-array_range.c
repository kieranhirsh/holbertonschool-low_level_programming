#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: the smallest number in the array
 * @max: the largest number in the array
 *
 * Return: NULL, if failure
 *         a pointer to the array otherwise
 *
 */
int *array_range(int min, int max)
{
	int *array;
	int jj = 0;
	int ii;

	if (min > max)
		return (NULL);

	array = malloc(sizeof(int) * (max - min + 1));
	if (array == NULL)
		return (NULL);

	ii = min;
	for (ii = min ; ii <= max ; ii++)
	{
		array[jj] = ii;
		jj += 1;
	}

	return (array);
}

