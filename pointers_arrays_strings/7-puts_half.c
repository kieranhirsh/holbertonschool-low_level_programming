#include <unistd.h>
#include "main.h"

/**
 * puts_half - prints the second half of a string
 * @str: the given string
 */
void puts_half(char *str)
{
	int ii, len, halflen;

	halflen = (_strlen(str) + 1) / 2;
	len = _strlen(str) - 1;
	for (ii = halflen ; ii <= len ; ii++)
	{
		write(1, &str[ii], 1);
	}
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

