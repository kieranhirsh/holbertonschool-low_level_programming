#include "main.h"

/**
 * print_most_numbers - prints the numbers zero to nine, excluding two and four
 *
 */
void print_most_numbers(void)
{
	int ii;

	for (ii = 0 ; ii <= 9 ; ii++)
	{
		if (ii == 2 || ii == 4)
			continue;
		_putchar(ii + '0');
	}
	_putchar('\n');
}

