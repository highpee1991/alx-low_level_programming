#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * This function generates an alphabet lowercase a-z,
 * using putchar only and not more than twice.
 * and print the result.
 *
 * Return: 0 on success
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	};
	putchar('\n');
	return (0);
}
