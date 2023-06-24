#include "main.h"

/**
 * print_line - Loop from nth number of times and print the _.
 * @n: is the number of time to be looped
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	for (i = 0; i <= n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
