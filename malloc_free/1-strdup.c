#include <stdlib.h>

/**
 * strdup - duplicates a string
 * @str: the string to be duplicated
 *
 * Return: NULL, if failure
 *         a pointer to the string otherwise
 *
 */
char *_strdup(char *str)
{
	char *dup;
	unsigned int size, ii;

	if (str == NULL)
		return (NULL);

	while (str[size] != '\0')
		size += 1;

	dup = malloc(sizeof(char) * (size + 2));
	if (dup == NULL)
		return (NULL);

	for (ii = 0 ; ii <= size ; ii++)
		dup[ii] = str[ii];

	return (dup);
}

