#include <stdio.h>

/**
 * main - check the code
 * @argc: the number of command line arguments passed to the program (unused)
 * @argv: the command line arguments passed to the program
 *
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	int bytes;
	int ii;
	int (*address)(int,char **);

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		printf("Error\n");
		return (2);
	}

	address = &main;

	for (ii = 0 ; ii < bytes ; ii++)
	{
		printf("%.2x", ((unsigned char *)address)[ii]);
		if (ii == (bytes - 1))
			printf("\n");
		else
			printf(" ");
	}

	return (0);
}
