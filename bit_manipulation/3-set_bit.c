#include "main.h"

/**
 * set_bit - sets a bit to 1
 * @n: a number
 * @index: the index of the bit to set to 1
 *
 * Return: 1, if success
 *         -1, if failure
 *
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int power = 1;
	unsigned int ii;

	if (index >= (8 * sizeof(n)))
		return (-1);

	if ((*n >> index) & 1)
	{
	}
	else
	{
		for (ii = 0 ; ii < index ; ii++)
			power *= 2;

		*n += power;
	}

	return (1);
}

