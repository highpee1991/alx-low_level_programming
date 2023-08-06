#include <stdio.h>

/**
 * get_endianness - Checks the endianness of the system.
 *
 * This function determines the endianness of the underlying system by creating
 * an integer variable with the value 1 and examining its memory representation.
 * It uses a pointer to a character (byte) to access the first byte (least
 * significant byte) of the integer. If the system is little-endian, the first
 * byte of the integer will have the value 1, and the function returns 1.
 * Otherwise, if the system is big-endian, the first byte will have the value 0,
 * and the function returns 0. The returned value indicates the endianness,
 * where 0 represents big-endian and 1 represents little-endian.
 *
 * Return: 0 if the system is big-endian, 1 if the system is little-endian.
 */
int get_endianness(void)
{i
	unsigned int num = 1;
	char *ptr = (char *)&num;

	return (*ptr == 1);
}

