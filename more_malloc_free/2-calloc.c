#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements in the array
 * @size: the size of each element
 *
 * Return: NULL, if failure
 *         a pointer to the array otherwise
 *
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *array;
	unsigned int ii;

	if (nmemb <= 0 || size <= 0)
		return (NULL);

	array = malloc(nmemb * size);
	if (array == NULL)
		return (NULL);

	while (ii < (nmemb * size))
		array[ii] = 0;

	return (array);
}

