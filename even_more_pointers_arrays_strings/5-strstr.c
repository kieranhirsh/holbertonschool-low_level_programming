/**
 * _strstr - searches a string for a substring
 * @haystack: the given string
 * @needle: the given substring
 *
 * Return: the pointer to the first byte in @haystack that matches @needle
 *         NULL, if @needle not found
 *
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int ii = 0;
	unsigned int jj;

	while (haystack[ii] != '\0')
	{
		if (needle[0] == '\0')
			return (&haystack[ii]);

		if (haystack[ii] == needle[0])
		{
			jj = 1;
			while (needle[jj] != '\0')
			{
				if (haystack[ii + jj] != needle[jj])
					break;
				jj += 1;
			}
			if (needle[jj] == '\0')
				return (&haystack[ii]);
		}
		ii += 1;
	}

	return ('\0');
}

