#include <stdio.h>

/**
 * _puts_recursion - Prints a string recursively.
 * @s: Pointer to the string to be printed.
 *
 * Description: This function prints the string pointed to by 's' recursively.
 * It starts by assigning 's' to a new pointer 'p', and then uses
 * 'puts' function
 * to print the value of 'p' as a string. It does so recursively
 * until the end of
 * the string is reached.
 */
void _puts_recursion(char *s)
{
	char *p = s;

	puts(p);
}
