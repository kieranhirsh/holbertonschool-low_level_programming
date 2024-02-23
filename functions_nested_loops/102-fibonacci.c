#include <stdio.h>

/**
 * main - entry point
 *        prints the first 50 numbers of the fibonacci sequence
 *
 * Return: Always 0.
 */
int main(void)
{
	long int ii, old, new, newnew;

	old = 1;
	new = 1;

	printf("%d, ", old);
	printf("%d, ", new);

	for (ii = 3 ; ii <= 50 ; ii++)
	{
		newnew = old + new;
		printf("%d, ", newnew);
		old = new;
		new = newnew;
	}
	printf("\n");

	return (0);
}

