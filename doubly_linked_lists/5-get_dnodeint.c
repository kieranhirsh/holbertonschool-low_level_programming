#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_dnode_at_index - gets a node at an index
 * @head: the list
 * @index; the index
 *
 * Return: a pointer to the node at the index
 *
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head;
	unsigned int ii;

	for (ii = 0 ; ii < index ; ii++)
	{
		if ((*temp).next == NULL)
			return (NULL);
		else
			temp = (*temp).next;
	}

	return (temp);
}

