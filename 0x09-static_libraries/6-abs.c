#include "main.h"
#include <stdlib.h>

/**
 * _abs - Entry point of the program
 *
 * @n: this is the item to be converted
 * This function that computes the absolute value of an integer,
 * using standard library abs.
 * and print the result.
 *
 * Return: 0 on success
 */
int _abs(int n)
{
	int absolute = abs(n);

	return (absolute);
}
