#include "dog.h"

/**
 * init_dog - initialises a dog
 * @d: the struct of type dog
 * @name: the dog's name
 * @age: the dog's age
 * @owner: the dog's owner
 *
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}

