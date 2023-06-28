#include <stdio.h>
#include <ctype.h>

/**
 * puts2 - Prints every other character of a string,
 * starting with the first character
 * @str: The string to print characters from
 */
void puts2(char *str)
{
	int i, j = 0;

	if (str == NULL)
		return;

	while (str[j] != '\0')
		j++;

	for (i = 0; i < j; i += 2)
	{
		if (isprint((unsigned char)str[i]))
			putchar(str[i]);
	}
	putchar('\n');
}
