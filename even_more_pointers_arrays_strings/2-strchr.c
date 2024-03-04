/**
 * _strchr - finds the first instance of a character in a string
 * @s: the given string
 * @c: the given character
 *
 * Return: pointer to the first occurence of @c in @s, or NULL if not found
 *
 */
char *_strchr(char *s, char c)
{
	unsigned int ii = 0;

	while (s[ii] != c && s[ii] != '\0')
	{
		ii += 1;
	}

	if (s[ii] == c)
		return (&s[ii]);
	else
		return ('\0'); 
}

