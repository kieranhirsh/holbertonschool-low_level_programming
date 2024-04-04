#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - prints a singly linked list
 * @h: the list
 *
 * Return: the size of the list
 *
 */
size_t print_dlistint(const dlistint_t *h)
{
	unsigned int num_of_nodes = 0;

	while (h != NULL)
	{
		num_of_nodes += 1;

		printf("%i\n", (*h).n);

		h = (*h).next;
	}

	return (num_of_nodes);
}

