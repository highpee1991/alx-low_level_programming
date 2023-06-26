#include "main.h"

/**
 * print_triangle - Print a triangle of a given size
 * using the '#' character.
 * @size: The size of the triangle to be printed.
 *
 * Description: This function prints a triangle made
 * up of '#' characters.
 * The triangle has @size lines, and each line has
 * an increasing number of '#'s.
 */
void print_triangle(int size)
{
	int i, j, y;

	if (size <= 0)
	{
		_putchar('\n');
	}

	for (i = 0; i < size; i++)
	{
		for (y = size - 1; y > i; y--)
		{
			_putchar(32);
		}
		for (j = 0; j <= i; j++)
		{
			_putchar(35);
		}
		_putchar('\n');
	}
}
