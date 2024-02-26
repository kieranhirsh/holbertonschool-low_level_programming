/**
 * _strlen - calculates the length of a given string
 * @s: the address of the given string
 *
 * Return: the length of the given string
 */
int _strlen(char *s)
{
	int i = 0, n = 0;

	while (n == 0)
	{
		if (s[i] == '\0')
			n = i;
		i += 1;
	}

	return (n);
}

