/**
 * cap_string - capitalised all the words of a string
 * @s: a string
 *
 * Return: the newly uppercased string
 */
char *cap_string(char *s)
{
	int ii = 0, next = 1;

	while (s[ii] != '\0')
	{
		if (next == 1)
		{
			if (s[ii] >= 97 && s[ii] <= 122)
				s[ii] = s[ii] - 32;
			next = 0;
		}
		if (s[ii] == ' ')
			next = 1;
		if (s[ii] == '\t')
			next = 1;
		if (s[ii] == '\n')
			next = 1;
		if (s[ii] == ',')
			next = 1;
		if (s[ii] == ';')
			next = 1;
		if (s[ii] == '.')
			next = 1;
		if (s[ii] == '!')
			next = 1;
		if (s[ii] == '?')
			next = 1;
		if (s[ii] == '"')
			next = 1;
		if (s[ii] == '(')
			next = 1;
		if (s[ii] == ')')
			next = 1;
		if (s[ii] == '{')
			next = 1;
		if (s[ii] == '}')
			next = 1;
		ii = ii + 1;
	}

	return (s);
}

