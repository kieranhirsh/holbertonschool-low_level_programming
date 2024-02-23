#include <stdio.h>

/**
 * main - entry point
 *        prints the first 50 numbers of the fibonacci sequence
 *
 * Return: Always 0.
 */
int main(void)
{
	int ii;
	long int old, new, newnew;

	old = 1;
	new = 1;

	printf("%ld", old);
	printf(", %ld", new);

	for (ii = 3 ; ii <= 50 ; ii++)
	{
		newnew = old + new;
		printf(", %ld", newnew);
		old = new;
		new = newnew;
	}
	printf("\n");

	return (0);
}

