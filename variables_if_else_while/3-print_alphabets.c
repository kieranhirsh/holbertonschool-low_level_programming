#include <stdio.h>

/**
 * main - entry point
 * this program prints the alphabet in lowercase, then again in uppercase
 *
 * Return: 0 (always success)
 */
int main(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
		putchar(ch);
	for (ch = 'A' ; ch <= 'Z' ; ch++)
		putchar(ch);

	putchar('\n');

	return (0);
}

