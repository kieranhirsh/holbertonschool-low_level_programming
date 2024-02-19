#include <stdio.h>

/**
 * main - entry point
 * this program prints all singe-digit numbers in base 10
 *
 * Return: 0 (always success)
 */
int main(void)
{
	int ch;

	for (ch = 0 ; ch <= 9 ; ch++)
		putchar((ch) + '0');

	putchar('\n');

	return (0);
}

