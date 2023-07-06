#include <string.h>

/**
 * _strlen_recursion - Calculates the length of a string recursively.
 * @s: Pointer to the string to calculate the length.
 * Return: The length of the string.
 * Description: This function calculates the length
 * of the string pointed to by 's'
 * using recursive calls. It starts by assigning 's' to
 * a new pointer 'p'.
 * Then, it uses the 'strlen' function to calculate the
 * length of 'p' and stores
 * the result in the 'result' variable. Finally, it returns
 * the length of the string.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
