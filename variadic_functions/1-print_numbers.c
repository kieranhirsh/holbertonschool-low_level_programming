#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints a bunch of numbers
 * @separator: the string to be printed between the numbers
 * @n: the numbers to be printed
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	int number;
	unsigned int ii;
	va_list args;

	va_start(args, n);

	for (ii = 0 ; ii < n ; ii++)
	{
		number = va_arg(args, int);
		printf("%i", number);
		if ((separator != NULL) && (ii != (n - 1)))
			printf("%s", separator);
	}
	printf("\n");

	va_end(args);
}

