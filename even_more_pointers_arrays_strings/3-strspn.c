/**
 * _strspn - finds the length of a prefix substring
 * @s: the given string
 * @accept: the given characters
 *
 * Return: the length of the prefix substring
 *
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int ii = 0;
	unsigned int jj;
	unsigned int count = 0;

	while (s[ii] != '\0')
	{
		jj = 0;
		while (accept[jj] != '\0')
		{
			if (s[ii] == accept[jj])
			{
				count += 1;
				break;
			}
			jj += 1;
		}
		if (accept[jj] == '\0')
			break;
		ii += 1;
	}

	return (count);
}

