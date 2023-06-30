#include <stdio.h>

/**
 * _strcpy - Copies a string from src to dest
 * @dest: Pointer to the destination buffer
 * @src: Pointer to the source string
 *
 * Return: Pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	char *value = dest;

	if (dest == NULL || src == NULL)
		return NULL;

	while (*src)
		*dest++ = *src++;

	dest = '\0';
	return (value);
}
