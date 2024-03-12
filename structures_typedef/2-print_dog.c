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
		printf("Age: ");
		if ((*d).age)
			printf("%9.6f\n", (*d).age);
		else
			printf("(nil)\n");
		printf("Owner: ");
		if ((*d).owner)
			printf("%s", (*d).owner);
		else
			printf("(nil)");
	}
}

