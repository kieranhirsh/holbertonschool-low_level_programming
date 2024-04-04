#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a node to the start of a list
 * @head: a pointer to the start of the list
 * @str: the string to add to the list
 *
 * Return: a pointer to the new head of the list
 *
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int length = 0;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	(*new).str = strdup(str);
	(*new).next = *head;

	while (str[length] != '\0')
		length += 1;

	(*new).len = length;

	*head = new;

	return (new);
}

