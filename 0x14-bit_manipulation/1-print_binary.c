#include <stdio.h>
#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to be printed in binary form.
 *
 * Return: None (void).
 *
 * Description: This function prints the binary representation of a number
 * by using bit manipulation and bitwise operators. It starts from the most
 * significant bit (leftmost) and moves towards the least significant bit
 * (rightmost). The function uses bitwise shift operators to check each bit
 * of the number and prints '0' or '1' accordingly.
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);

	_putchar((n & 1) + '0');
}
