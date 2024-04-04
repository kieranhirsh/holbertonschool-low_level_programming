#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a node to the end of a list
 * @head: a pointer to the start of the list
 * @str: the string to add to the list
 *
 * Return: if success, a pointer to new element
 *         otherwise, NULL
 *
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *temp;
	unsigned int length = 0;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	(*new).str = strdup(str);
	(*new).next = NULL;

	while (str[length] != '\0')
		length += 1;

	(*new).len = length;

	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		temp = *head;

		while ((*temp).next != NULL)
			temp = (*temp).next;

		(*temp).next = new;
	}


	return (new);
}

