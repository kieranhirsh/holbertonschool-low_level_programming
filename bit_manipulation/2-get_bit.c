#include "main.h"

/**
 * get_bit - gets a bit
 * @n: a number
 * @index: the desired bit
 *
 * return: the bit of the given number at index
 *
 */
int get_bit(unsigned long int n, unsigned int index)
{
	return ((n >> index) & 1);
}

