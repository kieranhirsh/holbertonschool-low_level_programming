#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"

/**
 * main - check the code
 * @argc: the number of command line arguments
 * @argv: the list of command line arguments
 *
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	char ops[6] = "+-*/%";
	char *operand;
	int a, b, result;
	int (*operation)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	operand = argv[2];

	if ((strchr(ops, *operand) == NULL) || (strlen(operand) != 1))
	{
		printf("Error\n");
		return (99);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	if (((*operand == '/') || (*operand == '%')) && (b == 0))
	{
		printf("Error\n");
		return (100);
	}

	operation = get_op_func(operand);
	result = operation(a, b);
	printf("%i\n", result);

	return (0);
}
