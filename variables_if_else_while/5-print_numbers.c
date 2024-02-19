#include <stdio.h>

/**
 * main - entry point
 * this program prints all singe-digit numbers in base 10
 *
 * Return: 0 (always success)
 */
int main(void)
{
	char ch;

	for (ch = '0' ; ch <= '9' ; ch++)
		putchar(ch);

	putchar('\n');

	return (0);
}

