#include <stdio.h>
#include <stdlib.h>
#include "main.h"

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
	char *prod;
	int len[2];
	int is_zero = 1;
	int ii, jj;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);

	}

	len[0] = _strlen(argv[1]);
	len[1] = _strlen(argv[2]);

	for (ii = 1 ; ii <= (argc - 1) ; ii++)
	{
		for (jj = 0 ; jj < len[0] ; jj++)
		{
			if ((argv[ii][jj] < 48) || (argv[ii][jj] > 57))
			{
				printf("Error\n");
				return (98);
			}
			if (argv[ii][jj] != 48)
				is_zero = 0;
		}
		if (is_zero == 1)
		{
			_putchar('0');
			_putchar('\n');
			return (0);
		}
		is_zero = 1;
	}

	prod = malloc(sizeof(char) * (len[0] + len[1]));
	for (ii = 0 ; ii < (len[0] + len[1]) ; ii++)
		prod[ii] = '0';

	return (0);
}
