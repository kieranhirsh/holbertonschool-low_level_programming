#include <stdio.h>
#include "lists.h"

/**
 * dlistint_t - prints the length of a doubly linked list
 * @h: the list
 *
 * Return: the size of the list
 *
 */
size_t dlistint_len(const dlistint_t *h)
{
	unsigned int num_of_nodes = 0;

	while (h != NULL)
	{
		num_of_nodes += 1;
		h = (*h).next;
	}

	return (num_of_nodes);
}

