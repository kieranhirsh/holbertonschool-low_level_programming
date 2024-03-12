#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: the start string
 * @s2: the end string
 * n: number of bytes of s2 to concatinate
 *
 * Return: NULL, if failure
 *         a pointer to the string otherwise
 *
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *cat;
	unsigned int size1 = 0, size2 = 0;
	unsigned int ii, jj;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[size1] != '\0')
		size1 += 1;

	while (s2[size2] != '\0')
		size2 += 1;

	if (n < size2)
		size2 = n;

	cat = malloc(sizeof(char) * (size1 + size2 + 1));
	if (cat == NULL)
		return (NULL);

	for (ii = 0 ; ii < size1 ; ii++)
		cat[ii] = s1[ii];
	for (jj = 0 ; jj < size2 ; jj++)
		cat[size1 + jj] = s2[jj];
	cat[size1 + size2] = '\0';

	return (cat);
}

