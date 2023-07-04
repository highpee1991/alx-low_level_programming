#include <ctype.h>
#include <stdio.h>

/**
 * string_toupper - Converts a string to uppercase.
 * @str: The string to be converted.
 *
 * Return: A pointer to the converted string.
 */
char *string_toupper(char *str)
{
	char *ptr;

	if (str == NULL)
		return (NULL);

	ptr = str;
	while (*ptr != '\0')
	{
		*ptr = toupper((unsigned char)*ptr);
		ptr++;
	}
	return (str);
}
