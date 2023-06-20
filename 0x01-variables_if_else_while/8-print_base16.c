#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program
 *
 * This function generates alphabet and num hex,
 * using putchar only and not more than 3 times .
 * and print the result.
 *
 * Return: 0 on success
 */
int main(void)
{
	char letter;
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar(num + '0');
	};

	for (letter = 'a'; letter < 'g'; letter++)
	{
		putchar(letter);
	};
	putchar('\n');
	return (0);
}
