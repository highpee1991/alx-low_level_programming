#include <stdio.h>

/**
 * main - code start
 *
 * write letter a-z in lowercase
 * return - 0 success
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
