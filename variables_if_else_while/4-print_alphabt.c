#include <stdio.h>

/**
 * main - entry point
 * this program prints the alphabet in lowercase, excluding e and q
 *
 * Return: 0 (always success)
 */
int main(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		if ((ch == 'e' || ch == 'q'))
			continue;

		putchar(ch);
	}

	putchar('\n');

	return (0);
}

