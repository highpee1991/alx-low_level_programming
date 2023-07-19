#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * _strlen - Calculates the length of a string.
 * @str: The input string.
 * Return: The length of the string (excluding the null terminator).
 */
int _strlen(char *str)
{
	int len = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

/**
 * new_dog - Creates a new dog with given attributes.
 * @name: Pointer to the name of the dog.
 * @age: Age of the dog.
 * @owner: Pointer to the owner of the dog.
 * Description:
 * This function creates a new dog struct and initializes its attributes
 * with the provided name, age, and owner. Memory is dynamically allocated
 * for the new dog and its attributes (name and owner strings).
 * The function returns a pointer to the new dog struct if successful,
 * or NULL if memory allocation fails.
 * Return: Pointer to the new dog struct on success, or NULL on failure.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int namelen, ownerlen, i;

	dog = malloc(sizeof(dog_t));

	if (dog == NULL)
		return (NULL);

	namelen = _strlen(name);

	dog->name = malloc(sizeof(char) * (namelen + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	for (i = 0; i < namelen; i++)
		dog->name[i] = name[i];

	ownerlen = _strlen(owner);

	dog->owner = malloc(sizeof(char) * (ownerlen + 1));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	for (i = 0; i < ownerlen; i++)
		dog->owner[i] = owner[i];

	dog->age = age;

	return (dog);
}
