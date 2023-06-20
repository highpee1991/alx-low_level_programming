#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * This function generates an alphabet lowercase a-z,
 * using putchar only and not more than twice.
 * exclude e and q and print the result.
 *
 * Return: 0 on success
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z';  letter++)
	{
		if (letter == 'e' || letter == 'q')
		{
			continue;
		}
		putchar(letter);
	};
	putchar('\n');
	return (0);
}
