#include "main.h"

/**
 * wildcase - compares two strings
 * @s1: a string to be compared
 * @s2: another string to be compared
 *
 * Return: 1 if strings can be considered identical
 *         0 if not
 *         -1 if an error has occured
 *
 */
int wildcase(char *s1, char *s2)
{
	if (s2[0] == '*')
		return (wildcase(s1, s2 + 1));
	else if (s2[0] == '\0')
		return (1);
	else if (s1[0] == '\0')
		return (0);
	else if (s1[0] != s2[0])
		return (wildcase(s1 + 1, s2));
	else if (s1[0] == s2[0])
		return (wildcmp(s1 + 1, s2 + 1));
	else
		return (-1);
}

/**
 * wildcmp - compares two strings
 * @s1: a string to be compared
 * @s2: another string to be compared
 *
 * Return: 1 if strings can be considered identical
 *         0 if not
 *         -1 if an error has occured due to the special character '*'
 *
 */
int wildcmp(char *s1, char *s2)
{
	if (s2[0] == '*')
		return (wildcase(s1, s2 + 1));
	else if (s1[0] != s2[0])
		return (0);
	else if ((s1[0] == '\0') && (s2[0] == '\0'))
		return (1);
	else
		return (wildcmp(s1 + 1, s2 + 1));
}

