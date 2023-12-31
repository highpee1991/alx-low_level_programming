#include <string.h>

/**
 * _memset - Fills a block of memory with a specified value.
 * @s: Pointer to the memory block to be filled.
 * @b: Value to be set.
 * @n: Number of bytes to be filled.
 * Return: Pointer to the filled memory block.
*/
char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	memset(ptr, b, n * sizeof(char));
	return (s);
}
