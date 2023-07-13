#include <stdlib.h>
#include <stdio.h>

/**
 * string_nconcat - Concatenate two strings using n amount of s2
 * @s1: First string
 * @s2: String to add to end of s1
 * @n: Amount of s2 to add to s1
 *
 * Return: pointer to new area in memory, NULL if it fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *strn, *empty;
	unsigned int i, _length, k, sn;

	_length = 0;
	empty = "";

	if (s1 == NULL)
		s1 = empty;
	if (s2 == NULL)
		s2 = empty;

	while (s1[_length] != '\0')
		_length++;

	sn = (_length + n) * sizeof(*strn);
	strn = malloc(sn + 1);

	if (strn == NULL)
		return (NULL);
	for (i = 0; i < sn && s1[i] != '\0'; i++)
	{
		strn[i] = s1[i];
	}

	for (k = 0; k < n && s2[k] != '\0'; k++, i++)
	{
		strn[i] = s2[k];
	}
	strn[i] = '\0';
	return (strn);
}
