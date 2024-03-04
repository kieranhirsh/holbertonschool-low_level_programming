/**
 * _memcpy - copies a memory area
 * @dest: the destination memory area
 * @src: the source memory area
 * @n: the number of byte to copy
 *
 * Return: pointer to the memory area @s
 *
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int ii;

	for (ii = 0 ; ii < n ; ii++)
		dest[ii] = src[ii];

	return (s);
}

