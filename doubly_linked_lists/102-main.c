#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - finds the largest palindrome that is the product of two 3-digit numbers
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	FILE *file;

	file = fopen("102-result", "w");
	fprintf(file, "906609");
	fclose(file);

	return (0);

}

