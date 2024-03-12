#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints a dog
 * @d: the dog
 *
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: ");
		if ((*d).name)
			printf("%s\n", (*d).name);
		else
			printf("(nil)\n");
		printf("Age: %8.6f\n", (*d).age);
		printf("Owner: ");
		if ((*d).owner)
			printf("%s\n", (*d).owner);
		else
			printf("(nil)\n");
	}
}

