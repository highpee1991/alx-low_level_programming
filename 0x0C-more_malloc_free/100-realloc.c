#include <stdlib.h>
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
	char *_pointer, *pt;
	unsigned int pos;

	if (old_size == new_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL && old_size != 0)
		new_size = old_size;

	pt = (char *)ptr;
	_pointer = malloc(sizeof(char) * new_size);

	if (_pointer == NULL)
		return (NULL);

	if (pt == NULL)
		return (_pointer);

	if (new_size > old_size)
	{
		for (pos = 0; pos <= old_size; pos++)
		{
			_pointer[pos] = pt[pos];
		}
	}
	else
	{
		for (pos = 0; pos < new_size; pos++)
		{
			_pointer[pos] = pt[pos];
		}
	}
	free(ptr);
	return (_pointer);
}
