#include <stdio.h>

/**
 * main - entry point
 * this program prints all possible 2 digit numbers, ignoring permutations
 *
 * Return: 0 (always success)
 */
int main(void)
{
	int a, b;

	for (a = 0 ; a <= 98 ; a++)
	{
		for (b = a + 1 ; b <= 99 ; b++)
		{
			if (b != 1)
			{
				putchar(',');
				putchar(' ');
			}
			putchar((a / 10) + '0');
			putchar((a % 10) + '0');
			putchar(' ');
			putchar((b / 10) + '0');
			putchar((b % 10) + '0');
		}
	}

	putchar('\n');

	return (0);
}

