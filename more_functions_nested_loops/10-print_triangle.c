#include "main.h"

/**
 * print_triangle - prints a triangle of size @size
 * @size: the size of the triangle to be printed
 *
 */
void print_triangle(int size)
{
	int ii, jj;

	if (size > 0)
	{
		for (ii = 1 ; ii <= size ; ii++)
		{
			for (jj = 1 ; jj <= size - ii ; jj++)
				_putchar(' ');
			for (jj = 1 ; jj <= ii ; jj++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}

