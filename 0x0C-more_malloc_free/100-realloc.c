#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * _realloc - Reallocates a memory block with a new size.
 * @ptr: Pointer to the memory block to be reallocated.
 * @old_size: Old size of the memory block in bytes.
 * @new_size: New size of the memory block in bytes.
 *
 * Description: This function reallocates the memory block
 * pointed to by 'ptr'
 * to a new size specified by 'new_size'. If 'ptr'
 * is NULL and 'new_size' is
 * non-zero, it behaves like malloc(). If 'new_size'
 * is zero and 'ptr' is not
 * NULL, it behaves like free(). The function preserves
 * the existing data in the
 * memory block up to the minimum size of 'old_size' and
 * 'new_size'. If the
 * reallocation fails, the function returns NULL.
 * Otherwise, it returns a pointer
 * to the newly allocated memory block.
 *
 * Return: Pointer to the reallocated memory block,
 * `or NULL on failure.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *pt;
	unsigned int size_copy;

	if (old_size == new_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
		return (malloc(new_size));

	pt = malloc(new_size);

	if (pt == NULL)
		return (NULL);

	size_copy = (new_size < old_size ? new_size : old_size);
	memcpy(pt, ptr, size_copy);
	free(ptr);

	return (pt);
}
