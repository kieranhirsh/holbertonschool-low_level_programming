#include <stdio.h>

/**
 * main - entry point
 * this program prints all possible 2 digit numbers, ignoring permutations
 *
 * Return: 0 (always success)
 */
int main(void)
{
	int a, b, c;

	for (a = 0 ; a <= 7 ; a++)
	{
		for (b = a + 1 ; b <= 8 ; b++)
		{
			for (c = b + 1 ; c <= 9 ; c++)
			{
				if (c != 2)
				{
					putchar(',');
					putchar(' ');
				}
				putchar(a + '0');
				putchar(b + '0');
				putchar(c + '0');
			}
		}
	}

	putchar('\n');

	return (0);
}

