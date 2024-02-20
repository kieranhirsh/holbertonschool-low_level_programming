#include "main.h"

/**
 * print_alphabet_x10 - entry point
 * this program prints the alphabet 10 times
 */
void print_alphabet_x10(void)
{
	int ii;
	char ch;

	for (ii = 1; ii <= 10 ; ii++)
	{
		for (ch = 97 ; ch <= 122 ; ch++)
			_putchar(ch);
		_putchar('\n');
	}
}

