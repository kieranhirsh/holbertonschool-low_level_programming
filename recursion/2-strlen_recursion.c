#include "main.h"

/**
 * _strlen_recursion - finds the length of a string
 * @s: the given string
 *
 * Return: @n - the string length
 *
 */
int _strlen_recursion(char *s)
{
	int len;

	if (s[0] == '\0')
	{
		len = 0;
	}
	else
	{
		len = _strlen_recursion(s + 1) + 1;
	}

	return (len);
}

