#include <stdlib.h>

/**
 * alloc_grid - creates a 2D array of ints, and initializes it
 * @width: the width of the grid
 * @height: the height of the grid
 *
 * Return: NULL, if failure
 *         a pointer to the array otherwise
 *
 */
int **alloc_grid(int width, int height)
{
	int **array;
	int ii;

	if (width <= 0 || height <= 0)
		return (NULL);

	array = malloc(sizeof(int *) * height);
	if (array == NULL)
		return (NULL);

	for (ii = 0 ; ii < height ; ii++)
	{
		array[ii] = malloc(sizeof(int) * width);
		if (array[ii] == NULL)
		{
			free(array);
			return (NULL);
		}
	}

	return (array);
}

