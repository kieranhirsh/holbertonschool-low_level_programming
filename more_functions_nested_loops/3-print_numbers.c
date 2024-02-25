#include "main.h"

/**
 * print_numbers - prints the numbers zero to nine, followed by a newline
 *
 */
void print_numbers(void)
{
	int ii;

	for (ii = 0 ; ii <= 9 ; ii++)
		_putchar(ii + '0');
	_putchar('\n');
}

