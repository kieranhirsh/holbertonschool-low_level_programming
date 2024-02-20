#include "main.h"

/**
 * _isalpha - checks whether a given character is alphabetic
 * @c: the character to be checked
 *
 * Return: 1 if @c is lowercase
 *         0 otherwise
 *
 */
int _isalpha(int c)
{
	if (c <= 122 && c >= 65)
	{
		if (c <= 96 && c >= 91)
			return (0);
		else
			return (1);
	}
	else
	{
		return (0);
	}
}

