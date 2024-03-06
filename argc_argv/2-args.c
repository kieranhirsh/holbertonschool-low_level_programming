#include <stdio.h>

/**
 * main - check the code
 * @argc: the number of command line arguments passed to the program
 * @argv: the command line arguments passed to the program
 *
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	int ii;

	for (ii = 1 ; ii < argc ; ii++)
		printf("%s\n", argv[ii]);

	return (0);
}
