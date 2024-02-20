#include "main.h"

/**
 * jack_bauer - prints all the minutes in a day
 */
void jack_bauer(void)
{
	char hh;
	char h;
	char mm;
	char m;

	for (hh = '0' ; hh <= '2' ; hh++)
	{
		for (h = '0' ; h <= '9' ; h++)
		{
			if (h >= '4' && hh >= '2')
				break;
			for (mm = '0' ; mm <= '5' ; mm++)
			{
				for (m = '0' ; m <= '9' ; m++)
				{
					_putchar(hh);
					_putchar(h);
					_putchar(':');
					_putchar(mm);
					_putchar(m);
					_putchar('\n');
				}
			}
		}
	}
}

