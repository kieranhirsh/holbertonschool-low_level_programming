#include <stdio.h>

/**
 * main - entry point
 *        prints the sum of the even fibonacci numbers less than 4,000,000
 *
 * Return: Always 0.
 */
int main(void)
{
	long int old, new, newnew, total;

	old = 1;
	new = 2;
	newnew = 0;
	total = 2;

	while (newnew <= 4000000)
	{
		newnew = old + new;
		if (newnew % 2 == 0)
			total = total + newnew;
		old = new;
		new = newnew;
	}
	printf("%ld\n", total);

	return (0);
}

