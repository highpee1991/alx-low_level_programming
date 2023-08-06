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
	int sz = sizeof(unsigned long int) * 8;
	unsigned long int mask = 1UL << (sz - 1);
	int flg = 0;

	while (mask > 0)
	{
		if ((n & mask) == mask)
		{
			_putchar('1');
			flg = 1;
		}
		else if (flg)
			_putchar (0);
		mask >>= 1;
	}
	if (!flg)
		_putchar('0');
}
