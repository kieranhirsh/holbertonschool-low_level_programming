#include "main.h"

/**
 * print_sign - checks the sign of a given number
 * @n: the character to be checked
 *
 * Return: 1  if @n is positive
 *         0  if @n is zero
 *         -1 if @n is negative
 *
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}

