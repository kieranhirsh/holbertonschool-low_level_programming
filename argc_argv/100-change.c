#include <stdio.h>
#include <stdlib.h>

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
	int cents;
	int values[5] = {25, 10, 5, 2, 1};
	int len = sizeof(values) / sizeof(values[0]);
	int ii;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 1)
	{
		printf("0\n");
		return (0);
	}

	for (ii = 0 ; ii < len ; ii++)
	{
		while (values[ii] <= cents)
		{
			ncoins += 1;
			cents -= values[ii];
		}
	}

	printf("%d\n", ncoins);

	return (0);
}

