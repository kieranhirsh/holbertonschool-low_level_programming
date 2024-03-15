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
 * check_arg - checks if an argument is valid
 * @str: the string
 *
 * Return: 0 if success
 *         1 if not a number
 *         2 if zero
 */
int check_arg(char *str)
{
	int ii;
	int len;
	int is_zero = 1;

	len = _strlen(str);
	for (ii = 0 ; ii < len ; ii++)
	{
		if ((str[ii] < 48) || (str[ii] > 57))
		{
			printf("Error\n");
			return (1);
		}
		if (str[ii] != 48)
			is_zero = 0;
	}

	if (is_zero == 1)
	{
		_putchar('0');
		_putchar('\n');
		return (2);
	}

	return (0);
}

/**
 * multiply - multiplies a number by a number with a single non-zero digit
 * @num1: the first number to be multiplied
 * @num2: the second number to be multiplied (must be single digit)
 * @power: the power of 10 @num2 represents
 *         i.e. @num2 = 3 and @power = 1 represents 30
 * @prod: the number to which the product of the multiplcation is added
 *         i.e. the final result is @prod + @num1 * @num2 * 10 ^ @power
 *         this lets us miltiply @num1 by any number using many steps
 *
 */
void multiply(char *num1, char num2, int power, char *prod)
{
	int lennum, lenprod;
	int carry = 0;
	int digit2, mult;
	int i, ii;

	lennum = _strlen(num1) - 1;
	lenprod = _strlen(prod) - 1;
	for (ii = 0 ; ii <= lennum ; ii++)
	{
		digit2 = num1[lennum - ii];
		mult = carry + (num2 - 48) * (digit2 - 48);
		i = lenprod - power - ii;
		carry = (mult + prod[i] - 48) / 10;
		prod[i] = (prod[i] - 48 + mult) % 10 + 48;
	}
	prod[lenprod - power - lennum - 1] += carry;
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
	int is_zero = 1, nzeros = 0;
	int check, ii, jj;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	for (ii = 1 ; ii <= (argc - 1) ; ii++)
	{
		check = check_arg(argv[ii]);
		if (check == 1)
			return (98);
		else if (check == 2)
			return (0);
		len[ii - 1] = _strlen(argv[ii]);
	}

	prod = malloc(sizeof(char) * (len[0] + len[1]));
	if (prod == NULL)
		return (1);
	for (ii = 0 ; ii < (len[0] + len[1]) ; ii++)
		prod[ii] = '0';

	for (ii = 0 ; ii < len[1] ; ii++)
		multiply(argv[1], argv[2][len[1] - ii - 1], ii, prod);

	while (prod[nzeros] == '0')
		nzeros += 1;

	for (ii = nzeros ; ii < (len[0] + len[1]) ; ii++)
		_putchar(prod[ii]);
	_putchar('\n');

	free(prod);

	return (0);
}
