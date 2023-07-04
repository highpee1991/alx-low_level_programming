#include <ctype.h>
#include <stdio.h>

/**
 * cap_string - Capitalizes all words of a string.
 * @str: The string to be capitalized.
 *
 * Return: A pointer to the capitalized string.
 */
char *cap_string(char *str)
{
	int i = 0;
	int capitalize_next = 1;

	if (str == NULL)
		return (NULL);

	while (str[i] != '\0')
	{
		if (capitalize_next && islower(str[i]))
			str[i] = toupper(str[i]);

		capitalize_next = 0;

		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
		str[i] == ',' || str[i] == ';' || str[i] == '.' ||
		str[i] == '!' || str[i] == '?' || str[i] == '"' ||
		str[i] == '(' || str[i] == ')' || str[i] == '{' || str[i] == '}')
		{
			capitalize_next = 1;
		}
		i++;
	}
	return (str);
}
