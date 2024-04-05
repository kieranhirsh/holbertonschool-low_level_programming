#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_dnodeint_end - adds a node to the end of a list
 * @head: a pointer to the start of the list
 * @n: the in to add to the list
 *
 * Return: if success, a pointer to new element
 *         otherwise, NULL
 *
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *temp;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	(*new).n = n;
	(*new).next = NULL;

	if (*head == NULL)
	{
		(*new).prev = NULL;
		*head = new;
	}
	else
	{
		temp = *head;

		while ((*temp).next != NULL)
			temp = (*temp).next;

		(*temp).next = new;
		(*new).prev = temp;
	}


	return (new);
}

