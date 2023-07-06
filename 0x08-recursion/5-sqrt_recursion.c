/**
 * _sqrt_recursion_helper - Recursive helper function
 * to calculate the square root of a number.
 * @a: The original number to calculate the square root of.
 * @b: The current guess for the square root.
 * @c: An upper bound for the search range.
 * Return: The square root of the number if it is an integer,
 * -1 otherwise.
 * Description: This function recursively searches for the
 * square root of a given number 'a'
 * within a specified range. It starts with a current guess
 * 'b' for the square root and an
 * upper bound 'c' for the search range. It checks if the
 * square of 'b' is equal to 'a'.
 * If it is, it returns 'b' as the square root. If 'b'
 * squared is greater than 'a',
 * it means the square root doesn't exist, so it returns -1.
 * Otherwise, it makes a recursive
 * call to the helper function with 'b + 1' as the new guess,
 * continuing the search.
 */
int _sqrt_recursion_helper(int a, int b, int c)
{
	if (b * b == a)
		return (b);
	if (b * b > a)
		return (-1);
	return (_sqrt_recursion_helper(a, b + 1, c));
}
/**
 * _sqrt_recursion - Calculates the square root of a number.
 * @n: The number to calculate the square root of.
 *
 * Return: The square root of the number.
 *
 * Description: This function calculates the square root of a
 * given number 'n'
 * using a helper function for recursive calls. If the square
 * root is an integer,
 * it returns the result. Otherwise, it returns -1.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt_recursion_helper(n, 0, n / 2 + 1));
}
