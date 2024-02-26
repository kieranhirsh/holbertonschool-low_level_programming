#include "main.h"

/**
 * print_number - prints a given integer
 * @n: the integer to be printed
 *
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = n * (-1);
	}
	if (n >= 1000000000)
		_putchar(((n / 1000000000) % 10) + '0');
	if (n >= 100000000)
		_putchar(((n / 100000000) % 10) + '0');
	if (n >= 10000000)
		_putchar(((n / 10000000) % 10) + '0');
	if (n >= 1000000)
		_putchar(((n / 1000000) % 10) + '0');
	if (n >= 100000)
		_putchar(((n / 100000) % 10) + '0');
	if (n >= 10000)
		_putchar(((n / 10000) % 10) + '0');
	if (n >= 1000)
		_putchar(((n / 1000) % 10) + '0');
	if (n >= 100)
		_putchar(((n / 100) % 10) + '0');
	if (n >= 10)
		_putchar(((n / 10) % 10) + '0');
	_putchar((n % 10) + '0');
}

