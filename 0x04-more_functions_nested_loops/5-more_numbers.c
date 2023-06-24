#include "main.h"

/**
 * more_numbers - Loop from 0-14 10 times and print the numbers.
 */
void more_numbers(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
		int j;

		for (j = 0; j <= 14; j++)
		{
			if (j >= 10)
			{
				_putchar((j / 10) + '0');
			}
			_putchar((j % 10) + '0');
		}
		_putchar('\n');
	}
}
