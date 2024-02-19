#include <stdio.h>

/**
 * main - entry point
 * this program prints the alphabet in lowercase
 *
 * Return: 0 (always success)
 */
int main(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
		putchar(ch);

	putchar('\n');

	return (0);
}

