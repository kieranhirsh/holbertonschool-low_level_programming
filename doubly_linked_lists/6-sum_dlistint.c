#include <stdio.h>
#include "lists.h"

/**
 * sum_dlistint - sums a list of integers
 * @head: the list
 *
 * Return: the sum of the list
 *
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += (*head).n;
		head = (*head).next;
	}

	return (sum);
}

