#include <stdio.h>

/**
 * main - entry point
 * this program prints the base 10 numbers
 *
 * Return: 0 (always success)
 */
int main(void)
{
	int ch;

	for (ch = 48 ; ch <= 57 ; ch++)
	{
		putchar(ch);
		if (ch == 57)
			break;
		putchar(',');
		putchar(' ');
	}

	putchar('\n');

	return (0);
}

