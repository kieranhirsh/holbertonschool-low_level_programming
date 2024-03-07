/**
 * wildcmp - compares two strings
 * @s1: a string to be compared
 * @s2: another string to be compared
 *
 * Return: 1 if strings can be considered identical
 *         0 if not
 *         -1 if an impossible logic path has been taken
 *
 */
int wildcmp(char *s1, char *s2)
{
	if (s1[0] == '\0')
	{
		if (s2[0] == '\0')
			return (1);
		else if (s2[0] == '*')
			return (wildcmp(s1, s2 + 1));
		else
			return (0);
	}
	else
	{
		if (s1[0] == s2[0])
		{
			return (wildcmp(s1 + 1, s2 + 1));
		}
		else if (s2[0] == '*')
		{
			if (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1))
				return (1);
		}
		else
		{
			return (0);
		}
	}

	return (-1);
}

