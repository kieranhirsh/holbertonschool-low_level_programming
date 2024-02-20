#include "main.h"

/**
 * print_last_digit - prints the last digit of a given number
 * @n: the number
 *
 * Return: the last digit of @n
 */
int print_last_digit(int n)
{
	if (n >= 0)
	{
		_putchar((n % 10) + 48);
		return (n % 10);
	}
	else
	{
		_putchar((-1 * n % 10) + 48);
		return (-1 * n % 10);
	}
}

