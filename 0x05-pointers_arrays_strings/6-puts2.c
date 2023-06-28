#include <stdio.h>
#include <ctype.h>

/**
 * puts2 - Prints every other character of a string,
 * starting with the first character
 * @str: The string to print characters from
 */
void puts2(char *str)
{
	int i;

	if (str == NULL)
		return;

	for (i = 0; str[i] != '\0'; i += 2)
	{
		if (isprint(str[i]))
			putchar(str[i]);
	}
	putchar('\n');
}
