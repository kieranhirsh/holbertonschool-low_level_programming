/**
 * _strncat - concatenates two strings
 * @dest: the string to be appended on to
 * @src: the string to append
 * @n: the number of characters of @src to append to @dest
 *
 * Return: a pointer to the resulting string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int counts = 0;
	int ii, min;

	while (src[counts] != '\0')
		counts = counts + 1;
	if (n < counts)
		min = n - 1;
	else
		min = counts;

	for (ii = 0 ; ii <= min ; ii++)
		dest[ii] = src[ii];

	return (dest);
}

