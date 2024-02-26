#include "main.h"

/**
 * print_square - prints a square of size @size
 * @size: the size of the square to be printed
 *
 */
void print_square(int size)
{
	int ii, jj;

	if (n > 0)
	{
		for (ii = 1 ; ii <= n ; ii++)
		{
			for (jj = 1; jj <= ii ; jj++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}

