#include <stdlib.h>

/**
 * malloc_checked - allocates memory
 * @b: amount of memory to allocate
 *
 * Return: pointer to the allocated memory
 *
 */
void *malloc_checked(unsigned int b)
{
	void *mem;

	mem = malloc(b);
	if (mem == NULL)
		exit(98);

	return (mem);
}

