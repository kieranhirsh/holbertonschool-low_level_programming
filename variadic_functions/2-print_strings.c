#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints a bunch of strings
 * @separator: the string to be printed between the numbers
 * @n: the numbers to be printed
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	char *string;
	unsigned int ii;
	va_list args;

	va_start(args, n);

	for (ii = 0 ; ii < n ; ii++)
	{
		string = va_arg(args, char *);
		if (string == NULL)
			printf("(nil)");
		else
			printf("%s", string);
		if ((separator != NULL) && (ii != (n - 1)))
			printf("%s", separator);
	}
	printf("\n");

	va_end(args);
}

