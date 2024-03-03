/**
 * memset - fills memory with a constant byte
 * @s: the memory area
 * @b: the byte to fill
 * @n: the number of byte to fill
 *
 * Return: pointer to the memory area @s
 *
 */
char *_memset(char *s, char b, unsigned int n)
{
	int ii;

	for (ii = 0 ; ii < n ; ii++)
		s[ii] = b;

	return (s);
}

