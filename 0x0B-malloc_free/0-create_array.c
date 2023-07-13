#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array of characters
 * initialized with a specific character
 * @size: The size of the array
 * @c: The character to initialize the array with
 *
 * Return: A pointer to the created array on success,
 * NULL on failure or if size is 0
 */
char *create_array(unsigned int size, char c)
{
	char *mallo;
	unsigned int i;

	if (size == 0)
		return (NULL);

	mallo = (char *)malloc(size * sizeof(char));

	if (mallo == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		mallo[i] = c;

	return (mallo);
}
