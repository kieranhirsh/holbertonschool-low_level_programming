#include <stdarg.h>

/**
 * sum_them_all - sums a bunch of numbers
 * @n: the number of numbers to be summed
 *
 * Return: 0 if the number of arguments is 0
 *         the result of the sum otherwise
 */
int sum_them_all(const unsigned int n, ...)
{
	int number;
	int result = 0;
	unsigned int ii;
	va_list args;

	if (n == 0)
		return (0);

	va_start(args, n);

	for (ii = 0 ; ii < n ; ii++)
	{
		number = va_arg(args, int);
		result += number;
	}

	va_end(args);

	return (result);
}

