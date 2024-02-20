#include "main.h"

/**
 * print_alphabet - entry point
 * this program prints the alphabet
 */
void print_alphabet(void)
{
	char ch;

	for (ch = 97 ; ch <= 122 ; ch++)
		_putchar(ch);
	_putchar('\n');
}

