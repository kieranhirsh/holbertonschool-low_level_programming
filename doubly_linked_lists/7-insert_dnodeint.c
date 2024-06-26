#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - adds a node to a list
 * @h: a pointer to the start of the list
 * @idx: the index where the node is to be added
 * @n: the int to add to the list
 *
 * Return: if success, a pointer to new element
 *         otherwise, NULL
 *
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new;
	dlistint_t *temp = *h;
	unsigned int ii;

	if ((idx == 0) || (*h == NULL))
		return (add_dnodeint(h, n));

	for (ii = 0 ; ii < idx ; ii++)
	{
		if (temp == NULL)
			return (NULL);

		temp = (*temp).next;
	}

	if (temp == NULL)
		return (add_dnodeint_end(h, n));

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	(*new).n = n;
	(*new).next = temp;
	(*new).prev = (*temp).prev;
	(*(*new).next).prev = new;
	(*(*new).prev).next = new;

	return (new);
}

