#ifndef VARIADIC_FUNCTIONS
#define VARIADIC_FUNCTIONS

#include <stdarg.h>

/**
 * struct operations - ties a data type to a corresponding function
 * @tpye: the data type
 * @func: the function
 *
 * Description: this struct stores a char with the corresponding function
 *              that prints the data type specified with the char
 */
typedef struct operations
{
	char type;
	void (*func)(va_list *args);
} operation;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
