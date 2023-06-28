#include <string.h>
#include <stdio.h>

/**
 * rev_string - Prints a string in reverse, followed by a new line
 * @s: The string to be printed in reverse
 * Return: nothing
 */
void rev_string(char *s)
{
        int len = 0;
	int i;
	char j;
	
	if (s == NULL)
		return;

        while (s[len] != '\0')
                len++;

        for (i = 0; i < len / 2; i++)
        {
                j = s[i];
		s[i] = s[len - 1 - i];
		s[len - 1 - i] = j;
        }
}
