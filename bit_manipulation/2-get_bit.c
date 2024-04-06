#include "main.h"

/**
 * get_bit - gets a bit
 * @n: a number
 * @index: the desired bit
 *
 * Return: the bit of the given number at index
 *
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (8 * sizeof(n)))
		return (-1);

	return ((n >> index) & 1);
}

