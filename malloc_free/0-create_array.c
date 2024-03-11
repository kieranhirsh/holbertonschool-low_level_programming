#include <stdlib.h>

/**
 * create_array - creates an array of chars, and initializes it with a specific char
 * @size: the size of the array to be created
 * @c: the char to be used for initialisation
 *
 * Return: NULL, if failue
 *         a pointer to the array otherwise
 *
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int ii;

	if (size <= 0)
		return ('\0');

	array = malloc(sizeof(c) * size);
	if (array == NULL)
		return ('\0');

	for (ii = 0 ; ii < size ; ii++)
		array[ii] = c;

	return (array);
}

