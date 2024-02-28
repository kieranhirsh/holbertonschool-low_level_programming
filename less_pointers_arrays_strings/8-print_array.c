#include <stdio.h>

/**
 * print_array - prints a specified number of elements on an array
 * @a: the given array
 * @n: the number of elements to print
 */
void print_array(int *a, int n)
{
	int ii;

	for (ii = 0 ; ii < n ; ii++)
	{
		printf("%d", a[ii]);
		if (ii != (n - 1))
			printf(", ");
	}
	printf("\n");
}

