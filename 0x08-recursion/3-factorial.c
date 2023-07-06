#include <stdio.h>
#include "main.h"

/**
 * factorial - Calculates the factorial of a number.
 * @n: The number to calculate the factorial of.
 *
 * Return: The factorial of the number.
 *
 * Description: This function calculates the factorial of a given number 'n'.
 * If 'n' is negative, it returns -1. If 'n' is 0, it returns 1.
 * Otherwise, it recursively calls itself with 'n-1' and multiplies the result
 * by 'n' to calculate the factorial.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
