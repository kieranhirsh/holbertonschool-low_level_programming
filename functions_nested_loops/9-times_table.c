#include "main.h"

/**
 * times_table - prints all the minutes in a day
 */
void times_table(void)
{
	int num2, num3, num6;

	for (num2 = 0 ; num2 <= 9 ; num2++)
	{
		for (num3 = 0 ; num3 <= 9 ; num3++)
		{
			_putchar(' ');
			num6 = num2 * num3;
			if (num6 > 9)
			{
				_putchar((num6 / 10) + '0');
			}
			else if (num6 <= 9)
			{
				_putchar(' ');
			}
			_putchar((num6 % 10) + '0');
			if (num3 < 9)
				_putchar(',');
		}
		_putchar('\n');
	}
}

