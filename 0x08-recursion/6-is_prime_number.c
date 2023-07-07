#include "main.h"

/**
 * is_prime_number - Checks if a number is prime.
 * @n: The number to check.
 *
 * Return: 1 if the number is prime, 0 otherwise.
 */
int is_prime_number(int n)
{
	int divisor = n / 2;

	if (n < 2)
		return (0);
	return (is_divisible_recursive(n, 2, divisor));
}
/**
 * is_divisible_recursive - Helper function to check
 * if a number is divisible by a divisor recursively.
 * @n: The number to check.
 * @divisor: The divisor to check.
 * @lim: The upper limit of divisors to check.
 *
 * Return: 1 if divisible, 0 otherwise.
 */
int is_divisible_recursive(int n, int divisor, int lim)
{
	if (n % divisor == 0 && divisor < lim)
		return (0);

	if (divisor > lim)
		return (1);

	return (is_divisible_recursive(n, divisor + 1, lim));
}
