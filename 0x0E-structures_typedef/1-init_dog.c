#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - Initializes a dog structure
 * @d: Pointer to the dog structure
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 * Description: This function initializes the members of a dog structure
 * with the provided name, age, and owner.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
