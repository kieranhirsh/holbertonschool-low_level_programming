#include <unistd.h>
#include <string.h>

/**
 * _puts - prints a string, followed by a new line
 * @str: the given string
 */
void _puts(char *str)
{
	write(1, str, strlen(str));
	write(1, "\n", 1);
}

