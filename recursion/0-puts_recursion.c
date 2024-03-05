#include "main.h"

/**
 * _puts_recursion - prints a string, followed by a newline
 * @s: the string to be printed
 *
 */
void _puts_recursion(char *s)
{
	_putchar(s[0]);
	if (s[0] != '\0')
		_puts_recursion(s + 1);
	else
		_putchar('\n');
}

