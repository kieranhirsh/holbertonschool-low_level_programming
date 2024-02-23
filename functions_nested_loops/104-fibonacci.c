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
	long int oldb, newb, newnewb;

	old = 1;
	new = 2;
	oldb = 0;
	newb = 0;

	printf("%ld", old);
	printf(", %ld", new);

	for (ii = 3 ; ii <= 98 ; ii++)
	{
		printf(", ");
		newnew = old + new;
		if (newnew >= 1000000000 || newnewb > 0)
		{
			newnewb = oldb + newb + ((newnew - (newnew % 1000000000)) / 1000000000);
			newnew = newnew % 1000000000;
			printf("%ld", newnewb);
			printf("%9.9ld", newnew);
			oldb = newb;
			newb = newnewb;
		}
		else
		{
			printf("%ld", newnew);
		}
		old = new;
		new = newnew;
	}
	printf("\n");

	return (0);
}

