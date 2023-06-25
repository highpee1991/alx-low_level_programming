#include "main.h"

/**
 * print_square - Prints a square shape using the `#` character.
 * @size: The size of the square.
 *
 * Description: This function takes an integer parameter `size`
 * and prints a square shape
 * with sides of length `size` using the `#` character.
 * If the size is less than or equall to 0, it prints a
 * newline character.
 */
void print_square(int size)
{
	int i;

	if (size <= 0)
		_putchar('\n');

	for (i = 0; i < size; i++)
	{
		int j;

		for (j = 0; j < size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
