#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: the start string
 * @s2: the end string
 *
 * Return: NULL, if failure
 *         a pointer to the string otherwise
 *
 */
char *str_concat(char *s1, char *s2)
{
	char *cat;
	int size1 = 0, size2 = 0;
	int ii, jj;

	while (s1[size1] != '\0')
		size1 += 1;

	while (s2[size2] != '\0')
		size2 += 1;

	cat = malloc(sizeof(char) * (size1 + size2 + 1));
	if (cat == NULL)
		return (NULL);

	for (ii = 0 ; ii < size1 ; ii++)
		cat[ii] = s1[ii];
	for (jj = 0 ; jj < size2 ; jj++)
		cat[size1 + jj] = s2[jj];

	return (cat);
}

