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

        while (s[len] != '\0')
                len++;

        for (len--; len >= 0; len--)
        {
                putchar(s[len]);
        }
        putchar('\n');
}
