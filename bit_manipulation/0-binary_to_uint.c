#include <stddef.h>
#include "main.h"

/**
 * binary_to_uint - converts a binary to an unsigned int
 * @b: a string containing 0's and 1's
 *
 * Return: 0, if b is NULL
 *         0, if there is a char in b that is not 0 or 1
 *         the unsigned int, otherwise
 *
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int uint = 0, len = 0;
	unsigned int power = 1;

	if ((b == NULL) || (*b == '\0'))
		return (0);

	while (b[len] != '\0')
	{
		if ((b[len] != '0') && (b[len] != '1'))
			return (0);

		len += 1;
	}

	do {
		len -= 1;
		uint += (b[len] - 48) * power;
		power *= 2;
	} while (len > 0);

	return (uint);
}

