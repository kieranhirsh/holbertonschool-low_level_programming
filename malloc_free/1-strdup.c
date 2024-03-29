#include <stdlib.h>

/**
 * _strdup - duplicates a string
 * @str: the string to be duplicated
 *
 * Return: NULL, if failure
 *         a pointer to the string otherwise
 *
 */
char *_strdup(char *str)
{
	char *dup;
	int size = 0;
	int ii;

	if (str == NULL)
		return (NULL);

	while (str[size] != '\0')
		size += 1;

	dup = malloc(sizeof(char) * (size + 1));
	if (dup == NULL)
		return (NULL);

	for (ii = 0 ; ii <= size ; ii++)
		dup[ii] = str[ii];

	return (dup);
}

