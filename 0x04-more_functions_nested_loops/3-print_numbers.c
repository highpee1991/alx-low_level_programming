#include "main.h"
#include <stdio.h>

/**
 * print_numbers - Loop from 0-9 and print the numbers.
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0' + i);
	}
	 _putchar('\n');

}
