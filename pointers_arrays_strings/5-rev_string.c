#include <unistd.h>
#include "main.h"

/**
 * rev°string - reverses a string
 * @s: the given string
 */
void rev_string(char *s)
{
	char rts[900];
	int i;

	for (i = 0 ; i < _strlen(s) ; i++)
		rts[i] = s[i];
	for (i = 0 ; i < _strlen(s) ; i++)
		s[i] = rts[_strlen(s) - i - 1];
}

/**
 * _strlen - calculates the length of a given string
 * @s: the address of the given string
 *
 * Return: the length of the given string
 */
int _strlen(char *s)
{
	int i = 0, n = -2;

	while (n != (i - 1))
	{
		if (s[i] == '\0')
			n = i;
		i += 1;
	}

	return (n);
}

