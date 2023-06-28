#include "main.h"

/**
 * _strlen - Calculates the length of a string.
 * @str: The string to calculate the length of.
 *
 * Return: The length of the string.
 */
int _strlen(char *str)
{
	int len = 0;

	while (str[len] != '\0')
		len++;

	return len;
}

/**
 * puts_half - Prints the second half of a string, followed by a new line.
 * @str: The string to print the second half of.
 */
void puts_half(char *str)
{
	int len = _strlen(str);
	int start;
	int i;

	if (len % 2 == 0)
		start = len / 2;
	else
		start = (len - 1) / 2 + 1;

	for (i = start; str[i] != '\0'; i++)
		putchar(str[i]);


	putchar('\n');
}
