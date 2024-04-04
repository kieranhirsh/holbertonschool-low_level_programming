#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints a singly linked list
 * @h: the list
 *
 * Return: the size of the list
 *
 */
size_t print_list(const list_t *h)
{
	unsigned int num_of_nodes = 0;

	while (h != NULL)
	{
		num_of_nodes += 1;

		if ((*h).str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", (*h).len, (*h).str);

		h = (*h).next;
	}
	
	return (num_of_nodes);
}

