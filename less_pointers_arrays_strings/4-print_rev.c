#include <unistd.h>
#include "main.h"

/**
 * print_rev - prints a string in reverse, followed by a new line
 * @s: the given string
 */
void print_rev(char *s)
{
	int i;

	for (i = (_strlen(s) - 1) ; i >= 0 ; i--)
		write(1, &s[i], 1);
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

