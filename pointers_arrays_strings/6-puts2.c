#include <unistd.h>
#include "main.h"

/**
 * puts2 - prints the even characters of a string
 * @str: the given string
 */
void puts2(char *str)
{
	int ii, len;

	len = _strlen(str);
	for (ii = 0 ; ii <= len ; ii += 2)
		write(1, &str[ii], 1);
	write(1, "\n", 1);
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

