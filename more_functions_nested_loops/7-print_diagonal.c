#include "main.h"

/**
 * print_diagonal - prints a diagonal line of length @n
 * @n: the length of the line to be printed
 *
 */
void print_diagonal(int n)
{
	int ii, jj;

	if (n > 0)
	{
		for (ii = 1 ; ii <= n ; ii++)
		{
			for (jj = 1; jj < ii ; jj++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}

