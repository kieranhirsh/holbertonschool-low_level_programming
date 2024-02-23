#include <stdio.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	int total, ii;

	total = 0;
	for (ii = 0 ; ii < 1024 ; ii++)
	{
		if (((ii % 3) == 0) || ((ii % 5) == 0))
			total = total + ii;
	}
	printf("%d\n",total);

	return (0);
}

