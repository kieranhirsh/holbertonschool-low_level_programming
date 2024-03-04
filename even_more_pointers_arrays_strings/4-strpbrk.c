/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: the given string
 * @accept: the given bites
 *
 * Return: the pointer to the first byte in @s that matches @accept
 *
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int ii = 0;
	unsigned int jj;

	while (s[ii] != '\0')
	{
		jj = 0;
		while (accept[jj] != '\0')
		{
			if (s[ii] == accept[jj])
			{
				return (&s[ii]);
			}
			jj += 1;
		}
		ii += 1;
	}

	return ('\0');
}

