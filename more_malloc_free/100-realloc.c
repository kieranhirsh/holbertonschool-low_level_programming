#include <stdlib.h>
#include <string.h>

/**
 * _realloc - reallocates memory
 * @ptr: pointer to the old memory
 * @old_size: size of the old memory
 * @new_size: size of the new memory
 *
 * Return: pointer to the reallocated memory
 *
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *mem;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
		return (malloc(new_size));
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	mem = malloc(new_size);
	if (mem == NULL)
		return (NULL);

	memcpy(mem, ptr, new_size);

	free(ptr);

	return (mem);
}

