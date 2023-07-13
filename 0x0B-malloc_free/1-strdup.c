#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Duplicates a string
 * @str: The string to be duplicated
 *
 * Return: A pointer to the newly allocated
 * duplicated string on success,
 * NULL if str is NULL or if memory allocation fails
 */
char *_strdup(char *str)
{
	int i;
	int length = 0;
	char *mallo;

	if (str == NULL)
		return (NULL);

	i = 0;
	while (str[i] != '\0')
	{
		length++;
		i++;
	}

	mallo = (char *)malloc(sizeof(char) * (length + 1));

	if (mallo == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
	{
		mallo[i] = str[i];
	}

	return (mallo);
}
