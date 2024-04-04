#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a list
 * @head: the list
 *
 */
void free_list(list_t *head)
{
	list_t *temp = head;

	if (temp != NULL)
	{
		while (head != NULL)
		{
			temp = head;
			free((*head).str);
			free(head);
			head = (*temp).next;
		}
	}
}

