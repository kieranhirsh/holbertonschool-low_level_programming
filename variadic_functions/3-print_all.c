#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_char - prints a char
 * @args: the char to be printed
 * @logical: tells main that something has been printed
 *
 */
void print_char(va_list *args)
{
	char string;

	string = va_arg(*args, int);

	printf("%c", string);
}

/**
 * print_string - prints a string
 * @args: the string to be printed
 * @logical: tells main that something has been printed
 *
 */
void print_string(va_list *args)
{
	char *string;

	string = va_arg(*args, char *);

	if (string == NULL)
		string = "(nil)";
	printf("%s", string);
}

/**
 * print_int - prints an int
 * @args: the int to be printed
 * @logical: tells main that something has been printed
 *
 */
void print_int(va_list *args)
{
	int number;

	number = va_arg(*args, int);

	printf("%i", number);
}

/**
 * print_float - prints a float
 * @args: the float to be printed
 * @logical: tells main that something has been printed
 *
 */
void print_float(va_list *args)
{
	double number;

	number = va_arg(*args, double);

	printf("%f", number);
}

/**
 * print_all - prints anything
 * @format: the format of what is to be printed
 *
 */
void print_all(const char * const format, ...)
{
	operation op[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string}
	};
	int ii = 0;
	int jj;
	char *separator;
	va_list args;

	va_start(args, format);
	separator = "";

	while ((format != NULL) && (format[ii] != '\0'))
	{
		jj = 0;
		while ((format[ii] != op[jj].type) && (jj < 4))
		{
			jj += 1;
		}

		if (jj < 4)
		{
			printf("%s", separator);
			op[jj].func(&args);
			separator = ", ";
		}

		ii += 1;
	}

	va_end(args);

	printf("\n");
}

