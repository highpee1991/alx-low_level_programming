#include "main.h"

/**
 * print_last_digit - Entry point of the program
 *
 * @num: this is the function to check
 * check the last didgit.
 *
 * Return: the num value
 */
int print_last_digit(int num)
{
	int last_digit = num % 10;
	char char_last_digit;

	if (last_digit < 0)
		last_digit *= -1;

	char_last_digit = '0' + last_digit;

	_putchar(char_last_digit);

	return (last_digit);
}
