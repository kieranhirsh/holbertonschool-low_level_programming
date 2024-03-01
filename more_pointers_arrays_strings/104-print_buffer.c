#include <stdio.h>

/**
 * print_buffer - prints a buffer
 * @b: the buffer to be printed
 * @size: the amount of bytes to print
 *
 */
void print_buffer(char *b, int size)
{
	int ii, jj;

	if (size <= 0)
	{
		putchar('\n');
	}
	else
	{
		for (ii = 0 ; ii < size ; ii += 10)
		{
			printf("%08x: ", ii);
			for (jj = 0 ; jj < 10 ; jj++)
			{
				if ((ii + jj) >= size)
					printf("  ");
				else
					printf("%02x", b[ii + jj]);
				if ((jj % 2) == 1)
					putchar(' ');
			}
			for (jj = 0 ; jj < 10 ; jj++)
				if ((ii + jj) >= size)
					break;
				else if (b[ii + jj] >= 32 && b[ii + jj] <= 126)
				{
					putchar(b[ii + jj]);
				}
				else
				{
					putchar('.');
				}
			putchar('\n');
		}
	}
}

