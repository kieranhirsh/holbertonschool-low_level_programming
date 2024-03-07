#include <stdio.h>
/**
 * set-string - sets the value of a pointer to a char
 * @s: the pointer
 * @b: the char
 *
 */
void set_string(char **s, char *to)
{
	*s = to;
}

