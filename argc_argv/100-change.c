#include <stdio.h>
#include <stdlib.h>

/**
 * coins - calculates the minimum number of coins to make change
 * @cents: the amount of change needed
 * @ncoins: a pointer to the number of coins needed
 *
 * Return: the amount of change needed after the largest coin value
 *         has been subtracted (and the counter incremented)
 *
 */
int coins(int cents, int *ncoins)
{
	int values[5] = {25, 10, 5, 2, 1};
	unsigned int len = sizeof(values) / sizeof(values[0]);
	unsigned int ii;

	for (ii = 0 ; ii < len ; ii++)
	{
		if (values[ii] <= cents)
		{
			*ncoins += 1;
			cents -= values[ii];
			coins(cents, ncoins);
			return (cents);
		}
	}

	return (cents);
}

/**
 * main - check the code
 * @argc: the number of command line arguments passed to the program
 * @argv: the command line arguments passed to the program
 *
 * Return: 1 if incorrect number of arguments passed
 *         0 otherwise
 *
 */
int main(int argc, char **argv)
{
	int ncoins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	if (atoi(argv[1]) < 1)
	{
		printf("0\n");
	}
	else
	{
		coins(atoi(argv[1]), &ncoins);
		printf("%d\n", ncoins);
	}

	return (0);
}

