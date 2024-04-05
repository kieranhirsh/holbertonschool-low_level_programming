#include <stdio.h>
#include "lists.h"

/**
 * main - finds the largest palindrome that is the product of two 3-digit numbers
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	FILE *file;
	int palindrome, product, remainder;
	int ii, jj, kk;

	for (ii = 9 ; ii >= 0 ; ii--)
	{
		for (jj = 9 ; jj >= 0 ; jj--)
		{
			for (kk = 9 ; kk >= 0 ; kk--)
			{
				palindrome = 0;

				palindrome += ii * 1;
				palindrome += jj * 10;
				palindrome += kk * 100;
				palindrome += kk * 1000;
				palindrome += jj * 10000;
				palindrome += ii * 100000;

				for (product = 100 ; product <= 999 ; product++)
				{
					if ((palindrome % product) == 0)
					{
						remainder = palindrome / product;

						if (((remainder / 1000) == 0) && ((remainder / 100) > 0))
						{
							file = fopen("102-result", "w");
							fprintf(file, "%i", palindrome);
							fclose(file);

							return (0);

						}
					}
				}
			}
		}
	}

	return (-1);

}

