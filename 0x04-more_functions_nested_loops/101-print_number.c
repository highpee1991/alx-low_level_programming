#include "main.h"

/**
 * print_number - Prints an integer number.
 * @n: The number to be printed.
 *
 * Description: This function prints an integer number.
 * If the number is zero or falls within
 * the range of lowercase or uppercase letters in ASCII,
 * a newline character is printed.
 * Otherwise, the function prints the numeric representation
 * of the number.
 */
void print_number(int n)
{
	unsigned int k;

	if (n < 0)
	{
		n = -n;
		k = n;
		_putchar('-');
	}
	else
	{
		k = n;
	}

	k /= 10;
	if (k != 0)
	{
		print_number(k);
	}
	_putchar((unsigned int)(n % 10) + '0');
}

