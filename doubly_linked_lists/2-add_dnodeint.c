#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint - adds a node to the start of a list
 * @head: a pointer to the start of the list
 * @n: the int to add to the list
 *
 * Return: a pointer to the new head of the list
 *
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	(*new).n = n;
	(*new).next = *head;
	(*new).prev = NULL;

	if (*head != NULL)
		(**head).prev = new;

	*head = new;

	return (new);
}

