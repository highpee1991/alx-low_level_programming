#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * binary_to_uint - Converts a binary string
 * to an unsigned integer.
 * @b: Pointer to the binary string.
 * Return: The converted unsigned integer.
 * Description: This function converts a binary
 * string containing only '0' and '1'
 * characters to an unsigned integer using bit
 * manipulation. If the input string
 * is NULL or contains any non-binary character,
 * the function returns 0. The
 * conversion is performed by iterating through
 * the binary string, shifting the
 * existing bits to the left, and adding the current
 * bit's value to the result.
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int v = 0;
	int i = 0;

	if (b == NULL)
		return (0);

	while (b[i] == '0' || b[i] == '1')
	{
		v <<= 1;
		v += b[i] - '0';
		i++;
	}

	if (b[i] != '\0')
		return (0);
	return (v);
}
