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
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n / 10)
	{
		print_number(n / 10);
	}
	_putchar('0' + (n % 10));
}
