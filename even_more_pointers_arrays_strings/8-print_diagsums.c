#include <stdio.h>

/**
 * print_diagsums - prints the two sums of the two diagonals of a square matrix
 * @a: the given matrix
 * @size: the size of the given matrix
 *
 */
void print_diagsums(int *a, int size)
{
	int ii;
	int sum1 = 0, sum2 = 0;

	for (ii = 0 ; ii < size ; ii++)
	{
		sum1 += a[ii];
		sum2 += a[size - ii - 1];
		a = a + size;
	}

	printf("%d, %d\n", sum1, sum2);
}

