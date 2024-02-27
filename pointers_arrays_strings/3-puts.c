#include <unistd.h>
#include "main.h"

/**
 * _puts - prints a string, followed by a new line
 * @str: the given string
 */
void _puts(char *str)
{
	write(1, str, _strlen(str));
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

