#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_nothing - does nothing
 * @args: irrelevant
 *
 */
void print_nothing(va_list *args, int *logical)
{
	(void) args;
	(void) logical;
}

/**
 * print_char - prints a char
 * @args: the char to be printed
 *
 */
void print_char(va_list *args, int *logical)
{
	char string;

	string = va_arg(*args, int);

	printf("%c", string);

	*logical = 1;
}

/**
 * print_string - prints a string
 * @args: the string to be printed
 *
 */
void print_string(va_list *args, int *logical)
{
	char *string;

	string = va_arg(*args, char *);

	if (string == NULL)
		string = "(nil)";
	printf("%s", string);

	*logical = 1;
}

/**
 * print_int - prints an int
 * @args: the int to be printed
 *
 */
void print_int(va_list *args, int *logical)
{
	int number;

	number = va_arg(*args, int);

	printf("%i", number);

	*logical = 1;
}

/**
 * print_float - prints a float
 * @args: the float to be printed
 *
 */
void print_float(va_list *args, int *logical)
{
	double number;

	number = va_arg(*args, double);

	printf("%f", number);

	*logical = 1;
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
		{'s', print_string},
		{'\0', print_nothing}
	};
	int has_printed = 0;
	int ii = 0;
	int jj;
	va_list args;

	va_start(args, format);

	while ((format != NULL) && (format[ii] != '\0'))
	{
		jj = 0;
		while ((format[ii] != op[jj].type) && (op[jj].type != '\0'))
		{
			jj += 1;
		}

		if (has_printed && (op[jj].type != '\0'))
			printf(", ");
		op[jj].func(&args, &has_printed);

		ii += 1;
	}

	va_end(args);

	printf("\n");
}

