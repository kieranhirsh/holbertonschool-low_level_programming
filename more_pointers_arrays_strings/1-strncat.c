/**
 * _strncat - concatenates two strings
 * @dest: the string to be appended on to
 * @src: the string to append
 * @n: the number of characters of @src to append to @dest
 *
 * Return: a pointer to the resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
	int countd = 0, counts = 0;
	int ii;

	while (dest[countd] != '\0')
		countd = countd + 1;
	while (src[counts] != '\0' && counts < n)
		counts = counts + 1;

	for (ii = countd ; ii <= countd + counts ; ii++)
		dest[ii] = src[ii - countd];

	return (dest);
}

