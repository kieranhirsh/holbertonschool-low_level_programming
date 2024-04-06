#include "main.h"

/**
 * clear_bit - sets a bit to 0
 * @n: a number
 * @index: the index of the bit to set to 0
 *
 * Return: 1, if success
 *         -1, if failure
 *
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int power = 1;
	unsigned int ii;

	if (index >= (8 * sizeof(n)))
		return (-1);

	if ((*n >> index) & 1)
	{
		for (ii = 0 ; ii < index ; ii++)
			power *= 2;

		*n -= power;
	}
	else
	{
	}

	return (1);
}

