#include <stdio.h>
#include <string.h>

/**
 * print_array - prints a specified number of elements on an array
 * @a: the given array
 * @n: the number of elements to print
 */
char *_strcpy(char *dest, char *src)
{
	int ii, len;

	len = strlen(src);

	for (ii = 0 ; ii < len; ii++)
		dest[ii] = src[ii];

	return (&dest[0]);
}

