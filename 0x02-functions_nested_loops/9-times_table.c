#include "main.h"

/**
 * times_table - Entry point of the program
 *
 * This function prints a multiplication table from 0 to 9,
 * using _putchar only.
 */
void times_table(void)
{
	int row, column, result;

	for (row = 0; row < 10; row++)
	{
		for (column = 0; column < 10; column++)
		{
			result = row * column;
			if (column > 0)
			{
				_putchar(',');
			}
			if (result < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + result);
			}
			else
			{
				_putchar(' ');
				_putchar('0' + (result / 10));
				_putchar('0' + (result % 10));
			}
		}
		_putchar(10);
	}
}
