#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code
 * @argc: the number of command line arguments passed to the program
 * @argv: the command line arguments passed to the program
 *
 * Return: 0 if two arguments are received
 *         1 otherwise
 *
 */
int main(int argc, char **argv)
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

	return (0);
}
