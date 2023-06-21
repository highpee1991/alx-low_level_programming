#include "main.h"

/**
 * print_alphabet - Entry point of the program
 *
 * This function uses _putchar to print the result,
 * using _putchar only and not more than 2 times .
 * and print the result.
 *
 * No Return: as this is void
 */
void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	};

	_putchar('\n');
}
