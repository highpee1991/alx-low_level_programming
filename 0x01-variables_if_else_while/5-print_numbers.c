#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program
 *
 * This function generates digit from 0-9,
 * using using the for loop.
 * and print the result.
 *
 * Return: 0 on success
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar(num + '0');
	};
	putchar('\n');
	return (0);
}
