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
	int last_digit = num % 100;
	char first_digit_char = '0' + (last_digit / 10);
	char second_digit_char = '0' + (last_digit % 10);

	_putchar(first_digit_char);
	_putchar(second_digit_char);

	return (last_digit);
}
