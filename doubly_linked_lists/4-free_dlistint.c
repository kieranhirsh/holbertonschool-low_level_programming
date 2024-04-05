#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a list
 * @head: the list
 *
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;

	if (temp != NULL)
	{
		while (head != NULL)
		{
			temp = head;
			free((*head).prev);
			free(head);
			head = (*temp).next;
		}
	}
}

