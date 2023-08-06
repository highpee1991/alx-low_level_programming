#include "main.h"

/**
 * flip_bits - Returns the number of bits needed to flip to get from
 *             one number to another.
 * @n: The first number.
 * @m: The second number.
 *
 * This function takes two numbers, 'n' and 'm', and calculates the number
 * of bits that need to be flipped to convert 'n' to 'm' or vice versa. It
 * uses bitwise XOR to find the difference between the two numbers and then
 * counts the number of 1s in the result to determine the number of bits
 * that need to be flipped. The function returns the count of flipped bits.
 * Return: 1 if the bit was cleared successfully, or -1 if an error occurred.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff = n ^ m;
	unsigned int count = 0;

	while (diff > 0)
	{
		count += diff & 1;
		diff >>= 1;
	}

	return (count);
}
