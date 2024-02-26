#include "main.h"

/**
 * more_numbers - prints the numbers zero to fourteen, ten times
 *
 */
void more_numbers(void)
{
	int ii, jj;

	for (jj = 1 ; jj <= 10 ; jj++)
	{
		for (ii = 0 ; ii <= 14 ; ii++)
		{
			if (ii >= 10)
				_putchar((ii / 10) + '0');
			_putchar((ii % 10) + '0');
		}
		_putchar('\n');
	}
}

