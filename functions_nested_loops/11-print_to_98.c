#include "main.h"

/**
 * tprint_to_98 - prints all the integer numbers between a given integer and 98
 * @n: the input number
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		while (n > 98)
		{
			if (n >= 100)
			{
				_putchar((n / 100) + '0');
				_putchar(((n / 10) % 10) + '0');
				_putchar((n % 10) + '0');
			}
			else
			{
				_putchar((n / 10) + '0');
				_putchar((n % 10) + '0');
			}
			_putchar(',');
			_putchar(' ');
			n = n - 1;
		}
	}
	else if (n < 98)
	{
		while (n < 98)
		{
			if (n < 0)
			{
				_putchar('-');
				if (n < -9)
				{
					_putchar((-1) * (n / 10) + '0');
				}
				_putchar((-1) * (n % 10) + '0');
			}
			else if (n < 10)
			{
				_putchar((n % 10) + '0');
			}
			else
			{
				_putchar((n / 10) + '0');
				_putchar((n % 10) + '0');
			}
			_putchar(',');
			_putchar(' ');
			n = n + 1;
		}
	}
	_putchar('9');
	_putchar('8');
	_putchar('\n');
}

