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
		return (n % 10);
	else
		return (-1 * n % 10);
}

