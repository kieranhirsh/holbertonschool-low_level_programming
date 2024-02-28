/**
 * _strcmp - compares two strings
 * @s1: a string
 * @s2: also a string
 *
 * Return: the difference in the ascii table position of the first different
 *         character of s1 and s2
 */
int _strcmp(char *s1, char *s2)
{
	int ii = 0;

	while (s1[ii] == s2[ii] && s1[ii] != '\0')
		ii = ii + 1;

	return (s1[ii] - s2[ii]);
}

