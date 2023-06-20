#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program
 *
 * This function generates digit 0-9,
 * using putchar only and not more than twice.
 * and print the result.
 *
 * Return: 0 on success
 */
int main(void)
{
	int num1;

	for (num1 = 0; num1 < 10; num1++)
	{
		putchar(num1 + '0');
	};
	putchar('\n');
	return (0);
}
