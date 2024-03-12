#include <stdlib.h>
#include <stdio.h>

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
	unsigned int ii;

	dup = malloc(sizeof(str));
	if (dup == NULL)
		return ('\0');

	while (str[ii] != '\0')
	{
		dup[ii] = str[ii];
		ii += 1;
	}
	dup[ii] = '\0';

	return (dup);
}

