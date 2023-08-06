#include <stdio.h>
#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index.
 * @n: The number from which to get the bit value.
 * @index: The index of the bit to retrieve (starting from 0).
 *
 * Return: The value of the bit at index or -1 if an error occurred.
 *
 * Description: This function takes a number 'n' and an index, and it returns
 * the value of the bit at the specified index position in the number. If the
 * index is out of range for the given data type, the function returns -1 to
 * indicate an error. Otherwise, the function extracts the bit value using
 * bitwise operations and returns 0 or 1 depending on the bit value.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mk = 1UL << index;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	return ((n & mk) ? (1) : (0));
}
