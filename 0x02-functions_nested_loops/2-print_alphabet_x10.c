#include "main.h"

/**
 * print_alphabet_x10 - entry point of the programme.
 *
 * this function print alphabet 10 times
 * No return reason for void
 */
void print_alphabet_x10(void)
{
	int num;

	for (num = 1; num <= 10; num++)
	{
		char letter;

		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
	}
}
