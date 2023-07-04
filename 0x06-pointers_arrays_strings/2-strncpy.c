#include <string.h>

/**
 * _strcpy - Copies a string from source to destination up to a maximum of n characters.
 * @dest: The destination string.
 * @src: The source string.
 * @n: The maximum number of characters to copy.
 *
 * Return: A pointer to the destination string.
 */
char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}
