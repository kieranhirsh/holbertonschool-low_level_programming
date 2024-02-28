/**
 * string_toupper - converts all the lowercase letters of a string to uppercase
 * @s: a string
 *
 * Return: the newly uppercased string
 */
char *string_toupper(char *s)
{
	int ii = 0;

	while (s[ii] != '\0')
	{
		if (s[ii] >= 97 && s[ii] <= 122)
			s[ii] = s[ii] - 32;
		ii = ii + 1;
	}

	return (s);
}

