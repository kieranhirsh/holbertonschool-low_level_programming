#include "main.h"

/**
 * print_chessboard - prints a chessboard
 * @a: the chessboard
 *
 */
void print_chessboard(char (*a)[8])
{
	unsigned int ii, jj;

	for (ii = 0 ; ii < 8 ; ii++)
	{
		for (jj = 0 ; jj < 8 ; jj++)
			_putchar(a[ii][jj]);
		_putchar('\n');
	}
}

