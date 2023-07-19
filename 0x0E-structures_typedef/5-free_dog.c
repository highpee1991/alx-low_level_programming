#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Frees the memory allocated for a dog.
 * @d: Pointer to the dog to free.
 * Description:
 * This function frees the memory allocated for the given dog.
 * It first frees the memory allocated for the name and owner strings,
 * and then frees the memory for the dog struct itself.
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
