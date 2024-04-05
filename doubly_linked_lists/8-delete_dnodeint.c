#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node from a list
 * @head: a pointer to the start of the list
 * @index: the index where the node is to be deleted
 *
 * Return: if success, 1
 *         otherwise, -1
 *
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *del = *head;
	unsigned int ii;

	if (*head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		if ((**head).next == NULL)
		{
			*head = NULL;

			return (1);
		}

		*head = (**head).next;
		free(del);
		(**head).prev = NULL;

		return (1);
	}

	for (ii = 0 ; ii < index ; ii++)
	{
		if ((*del).next == NULL)
			return (-1);

		del = (*del).next;
	}

	if ((*del).next == NULL)
	{
		(*(*del).prev).next = NULL;
		free(del);

		return (1);
	}

	(*(*del).prev).next = (*del).next;
	(*(*del).next).prev = (*del).prev;
	free(del);

	return (1);
}

