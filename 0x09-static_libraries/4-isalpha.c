#include "main.h"

/**
 * _isalpha - Checks if a character is lowercase or uppercase
 * @c: The character to be checked
 *
 * This function determines whether the given character is a
 * lowercase or uppercase letter.
 *
 * Return: 1 if the character is lowercase, 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
