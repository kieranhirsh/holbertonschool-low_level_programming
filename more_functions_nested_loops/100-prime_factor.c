#include <stdio.h>

/**
 * main - prints the largest prime factor of 612852475143
 *
 * Return: Always 0.
 */
int main(void)
{
	long int num = 612852475143;
	int fact = 0, ii;

	while (num > 1)
	{
		for (ii = 2 ; ii <= num ; ii++)
		{
			if ((num % ii) == 0)
			{
				if (ii > fact)
					fact = ii;
				num = num / ii;
			}
		}
	}
	printf("%i\n", fact);

	return (0);
}

