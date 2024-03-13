#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - initialises a dog
 * @name: the dog's name
 * @age: the dog's age
 * @owner: the dog's owner
 *
 * Return: the dog
 *
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog;
	int lenname = 0, lenowner = 0;
	int ii;

	newdog = malloc(sizeof(dog_t));
	if (newdog == NULL)
		return (NULL);

	while (name[lenname] != '\0')
		lenname += 1;
	(*newdog).name = malloc(lenname * sizeof((*newdog).name));
	if ((*newdog).name == NULL)
	{
		free(newdog);
		return (NULL);
	}
	for (ii = 0 ; ii <= lenname ; ii++)
		(*newdog).name[ii] = name[ii];

	(*newdog).age = age;

	while (owner[lenowner] != '\0')
		lenowner += 1;
	(*newdog).owner = malloc(lenowner * sizeof((*newdog).owner));
	if ((*newdog).owner == NULL)
	{
		free((*newdog).name);
		free(newdog);
		return (NULL);
	}
	for (ii = 0 ; ii <= lenowner ; ii++)
		(*newdog).owner[ii] = owner[ii];

	return (newdog);
}

