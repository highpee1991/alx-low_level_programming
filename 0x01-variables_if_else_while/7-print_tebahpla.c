#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program
 *
 * This function generates alphabet in rev order,
 * using putchar only and not more than twice.
 * and print the result.
 *
 * Return: 0 on success
 */
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
	{
		putchar(letter);
	};
	putchar('\n');
	return (0);
}
