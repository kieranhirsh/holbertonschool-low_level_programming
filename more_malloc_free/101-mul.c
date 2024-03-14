#include <stdio.h>

/**
 * _strlen - finds the length of a string
 * @str: the string
 *
 * Return: the length of the string
 */
int _strlen(char *str)
{
	int ii = 0;

	while (str[ii] != '\0')
		ii += 1;

	return (ii);
}

/**
 * main - check the code
 * @argc: the number of command line arguments passed to the program
 * @argv: the command line arguments passed to the program (unused)
 *
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	int len1, len2;
	int ii;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);

	}

	len1 = _strlen(argv[1]);
	len2 = _strlen(argv[2]);

	for (ii = 0 ; ii < len1 ; ii++)
	{
		if ((argv[1][ii] < 48) || (argv[1][ii] > 57))
		{
			printf("Error\n");
			return (98);
		}
	}

	for (ii = 0 ; ii < len2 ; ii++)
	{
		if ((argv[2][ii] < 48) || (argv[2][ii] > 57))
		{
			printf("Error\n");
			return (98);
		}
	}

	return (0);
}
