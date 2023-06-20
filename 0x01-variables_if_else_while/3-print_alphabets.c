#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * This function generates an alphabet lowercase a-z,
 * using putchar only and not more than twice,
 * and prints the result.
 *
 * Return: 0 on success
 */
int main(void)
{
	char lower, upper;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		putchar(lower);
	}

	for (upper = 'A'; upper <= 'Z'; upper++)
	{
		putchar(upper);
	}

	putchar('\n');
	return (0);
}
