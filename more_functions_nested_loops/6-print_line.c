#include "main.h"

/**
 * print_line - prints a line of length @n
 * @n: the length of the line to be printed
 *
 */
void print_line(int n)
{
	if (n > 0)
	{
		while (n > 0)
		{
			_putchar('_');
			n = n - 1;
		}
	}
	_putchar('\n');
}

