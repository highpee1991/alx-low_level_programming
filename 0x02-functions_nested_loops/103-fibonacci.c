#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Calculate the sum of even-valued terms in the Fibonacci sequence
 * up to a limit of 4,000,000
 *
 * Return: 0 for success
 */
int main(void)
{
	unsigned long lim = 4000000;
	unsigned long prev = 1;
	unsigned long curr = 2;
	unsigned long next;
	unsigned long sum = 0;

	while (curr <= lim)
	{
		if (curr % 2 == 0)
			sum += curr;

		next = prev + curr;
		prev = curr;
		curr = next;
	}
	printf("%lu\n", sum);
	return (0);
}
