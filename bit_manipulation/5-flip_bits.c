#include "main.h"

/**
 * flip_bits - counts the number of bits that need to be flipped to get from
 *             one number to another
 * @n: one number
 * @m: another number
 *
 * Return: the number of bit flips needed to get from @n to @m
 *
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flipped = n ^ m;
	unsigned int count = 0;

	while (flipped > 0)
	{
		count += flipped & 1;
		flipped >>= 1;
	}

	return (count);
}

