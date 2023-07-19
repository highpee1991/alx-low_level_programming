#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int namelen, ownerlen, i;

	namelen = 0;
	while (name[namelen] != '\0')
		namelen++;

	ownerlen = 0;
	while (owner[ownerlen] != '\0')
		ownerlen++;


	dog = malloc(sizeof(dog_t));

	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(dog->name) * namelen);
	if (dog == NULL)
		return(NULL);	

	for (i = 0; i < namelen; i++)
		dog->name[i] = name[i];

	dog->owner = malloc(sizeof(dog->owner) * ownerlen);
	if (dog == NULL)
		return (NULL);
	for (i = 0; i < ownerlen; i++)
		dog->owner[i] = owner[i];

	dog->age = age;

	return (dog);
}
