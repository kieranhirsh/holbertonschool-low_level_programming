#include "main.h"

/**
 * print_times_table - the n times table, starting with 0
 * @n: the times table to be printed
 */
void print_times_table(int n)
{
	int row, col, mult;

	if (n >= 0 && n <= 15)
	{
		for (col = 0 ; col <= n ; col++)
		{
			_putchar('0');
			_putchar(',');
			for (row = 1 ; row <= n ; row++)
			{
				_putchar(' ');
				mult = row * col;
				if (mult > 99)
				{
					_putchar((mult / 100) + '0');
					_putchar(((mult / 10) % 10) + '0');
				}
				else if (mult > 9)
				{
					_putchar(' ');
					_putchar((mult / 10) + '0');
				}
				else
				{
					_putchar(' ');
					_putchar(' ');
				}
				_putchar((mult % 10) + '0');
				if (row < n)
					_putchar(',');
			}
			_putchar('\n');
		}
	}
}

