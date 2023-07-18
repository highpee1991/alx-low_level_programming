#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog - Represents information about a dog.
 * @name: Pointer to the name of the dog.
 * @owner: Pointer to the owner of the dog.
 * @age: Age of the dog.
 *
 * Description: This structure defines the attributes of a dog, including its
 * name, owner, and age.
 */
struct dog
{
	char *name;
	char *owner;
	float age;
};
#endif /* DOG_H */
