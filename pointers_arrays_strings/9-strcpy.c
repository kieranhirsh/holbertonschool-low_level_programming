#include <stdio.h>
#include "main.h"

/**
 * _strcpy - copies a string to another string
 * @dest: the string to be copied into
 * @src: the string to copy
 *
 * Return: the pointer to @dest
 */
char *_strcpy(char *dest, char *src)
{
	int ii, len;

	len = _strlen(src);

	for (ii = 0 ; ii < len; ii++)
		dest[ii] = src[ii];

	return (&dest[0]);
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

