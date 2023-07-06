#include <math.h>

/**
 * _pow_recursion - Calculates the value of x raised to the power of y.
 * @x: The base number.
 * @y: The exponent.
 *
 * Return: The value of x raised to the power of y.
 *
 * Description: This function calculates the value of x raised to the power
 * of y
 * using recursive calls. If y is negative, it returns -1. Otherwise, it
 * uses the
 * pow function from the math library to calculate the result and returns it.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y)
		return (x * _pow_recursion(x, y - 1));
	return (1);
}
