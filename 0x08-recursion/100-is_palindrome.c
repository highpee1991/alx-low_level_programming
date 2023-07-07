#include <string.h>

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The string to check.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{

	int i = 0;
       	int c = 0;
       	int n = strlen(s);

	while (i < n / 2)
	{
		if (s[i] == s[n - i - 1])
		{
			c++;
			i++;
		}
		else
			return (0);
	}
	return ((c == i) ? 1 : 0);
}
