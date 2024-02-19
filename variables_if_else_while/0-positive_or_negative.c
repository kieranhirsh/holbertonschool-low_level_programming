#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry point
 * this program tells you whether a random number is +ve or -ve
 *
 * Return: 0 (always success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%i is positive\n", n);
	else if (n == 0)
		printf("%i is zero\n", n);
	else if (n < 0)
		printf("%i is negative\n", n);

	return (0);
}
