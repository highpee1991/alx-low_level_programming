#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _print_rev_recursion - Prints a string in reverse recursively.
 * @s: Pointer to the string to be printed in reverse.
 *
 * Description: This function prints the string pointed to by
 * 's' in reverse
 * order using recursive calls. It starts by assigning 's' to
 * a new pointer 'p',
 * and then checks if the current character is not the null
 * terminator.
 * If it's not, it recursively calls itself with the next
 * character in the string,
 * and then prints the current character using _putchar.
 */
void _print_rev_recursion(char *s)
{
	char *p = s;

	if (*p)
	{
		_print_rev_recursion(p + 1);
		_putchar(*p);
	}
}
