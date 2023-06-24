#include "main.h"

/**
 * print_most_numbers - Loop from 0-9 and print the numbers.
 */
void print_most_numbers(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
		if (x == 2 || x == 4)
			continue;
		_putchar('0' + x);
	}

	_putchar('\n');
}
