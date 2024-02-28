/**
 * _strcat - concatenates two strings
 * @dest: the string to be appended on to
 * @src: the string to append
 *
 * Return - a pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
	int countd = 0, counts = 0;
	int ii;

	while (dest[countd] != '\0')
		countd = countd + 1;
	while (dest[counts] != '\0')
		counts = counts + 1;

	for (ii = countd ; ii <= countd + counts ; ii++)
		dest[ii] = src[ii - countd];

	return (dest);
}

