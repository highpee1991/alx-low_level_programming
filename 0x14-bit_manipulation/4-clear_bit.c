#include "main.h"

/**
 * clear_bit - Sets the value of a bit to 0 at a given index.
 * @n: A pointer to the number where the bit value needs
 * to be cleared.
 * @index: The index of the bit to clear (starting from 0).
 *
 * This function takes a pointer to an unsigned long int 'n'
 * and an index.
 * It sets the value of the bit at the specified index
 * position in the number
 * to 0. The index starts from 0, representing the least
 * significant bit.
 * The function first checks if the index is within the
 * valid range for the
 * given data type. If the index is greater than or equal
 * to the number of
 * bits in an unsigned long int, the function returns -1
 * to indicate an error.
 * Otherwise, the function clears the bit to 0 using bitwise
 * AND (&) operation
 * with a mask that has all bits set to 1 except the bit at
 * the specified index,
 * which is set to 0. The function modifies the original
 * number 'n' through the
 * pointer and then returns 1 to indicate that the bit was
 * successfully cleared
 * to 0. If an error occurs, the function returns -1.
 *
 * Return: 1 if the bit was cleared successfully, or -1
 * if an error occurred.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	*n &= ~(1UL << index);
	return (1);
}

