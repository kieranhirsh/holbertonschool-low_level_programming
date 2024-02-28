/**
 * _strncpy - copies one string onto another
 * @dest: the string to be copied onto
 * @src: the string to copy
 * @n: the number of characters of @src to copy to @dest
 *
 * Return: a pointer to the resulting string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int counts = 0;
	int ii;

	while (src[counts] != '\0')
		counts = counts + 1;
	if ((n - 1) <= counts)
	{
		for (ii = 0 ; ii <= n - 1 ; ii++)
			dest[ii] = src[ii];
	}
	else
	{
		for (ii = 0 ; ii <= counts ; ii++)
			dest[ii] = src[ii];
		for (ii = counts + 1 ; ii <= n - 1 ; ii++)
			dest[ii] = '\n';
	}

	return (dest);
}

