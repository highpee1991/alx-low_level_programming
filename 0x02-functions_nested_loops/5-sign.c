#include "main.h"

/**
 * print_sign - Determines the sign of a number
 * @n: The number to be checked
 *
 * This function determines the sign of the given number 'n'
 * and prints a corresponding symbol based on its value.
 *
 * Return:
 *   1 and prints '+' if 'n' is greater than zero
 *   0 and prints '0' if 'n' is zero
 *  -1 and prints '-' if 'n' is less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
