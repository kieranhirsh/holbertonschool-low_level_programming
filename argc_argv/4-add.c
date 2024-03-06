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
	int ii;
	int sum = 0;

	for (ii = 1 ; ii < argc ; ii++)
	{
		if ((atoi(argv[ii]) == 0) && (*argv[ii] != '0'))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[ii]);
	}

	printf("%d\n", sum);

	return (0);
}
