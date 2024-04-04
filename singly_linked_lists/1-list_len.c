#include <stdio.h>
#include "lists.h"

/**
 * list_len - prints the length of a singly linked list
 * @h: the list
 *
 * Return: the size of the list
 *
 */
size_t list_len(const list_t *h)
{
	unsigned int num_of_nodes = 0;

	while (h != NULL)
		num_of_nodes += 1;

	return (num_of_nodes);
}

