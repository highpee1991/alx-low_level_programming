#include <stdlib.h>

/**
 * _calloc - Allocate memory for array of nmemb elements of size bytes
 * @nmemb: Number of elements
 * @size: Size in bytes of elements
 *
 * Return: Pointer to new memory, NULL if it fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i, n_size;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	n_size = nmemb * size;
	ptr = malloc(n_size);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < n_size; i++)
	{
		ptr[i] = 0;
	}
	return (ptr);
}
