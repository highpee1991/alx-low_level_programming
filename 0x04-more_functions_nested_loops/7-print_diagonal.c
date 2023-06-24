#include "main.h"

/**
 * print_diagonal - Loop from nth number of times and print the _.
 * @n: is the number of times to be looped
 */
void print_diagonal(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	for (i = 0; i < n; i++)
	{
		int j;

		for (j = 0; j < i; j++)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
	}
}
