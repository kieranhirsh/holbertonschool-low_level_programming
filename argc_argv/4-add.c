#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code
 * @argc: the number of command line arguments passed to the program
 * @argv: the command line arguments passed to the program
 *
 * Return: 0 if sum works
 *         1 otherwise
 *
 */
int main(int argc, char **argv)
{
	int ii, jj;
	int sum = 0;

	for (ii = 1 ; ii < argc ; ii++)
	{
		jj = 0;

		while (argv[ii][jj] != 0)
		{
			if (argv[ii][jj] < 48 || argv[ii][jj] > 57)
			{
				printf("Error\n");
				return (1);
			}
			jj += 1;
		}

		sum += atoi(argv[ii]);
	}

	printf("%d\n", sum);

	return (0);
}
