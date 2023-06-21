#include "main.h"

/**
 * jack_bauer - Entry point of the program
 *
 * This function that prints every minute
 * of the day of Jack Bauer, starting from
 * 00:00 to 23:59,
 * using _putchar only and print the result.
 *
 * Return: 0 on success
 */
void jack_bauer(void)
{
	int min, hr;

	for (hr = 0; hr < 24; hr++)
	{
		for (min = 0; min < 60; min++)
		{
			_putchar('0' + (hr / 10));
			_putchar('0' + (hr % 10));
			_putchar(':');
			_putchar('0' + (min / 10));
			_putchar('0' + (min % 10));
			_putchar('\n');
		}
	}
}
