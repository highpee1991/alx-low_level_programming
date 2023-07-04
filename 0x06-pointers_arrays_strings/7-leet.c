#include <stdio.h>

/**
 * leet - Encodes a string into 1337.
 * @str: The string to be encoded.
 *
 * Return: A pointer to the encoded string.
 */
char *leet(char *str)
{
	char *ptr = str;
	int i;
	char str_char[] = "aeotlAEOTL";
	char str_replace[] = "4307143071";

	for (; *ptr != '\0'; ptr++)
	{
		for (i = 0; str_char[i] != '\0'; i++)
		{
			if (*ptr == str_char[i])
			{
				*ptr = str_replace[i];
				break;
			}
		}
	}
	return (str);
}

