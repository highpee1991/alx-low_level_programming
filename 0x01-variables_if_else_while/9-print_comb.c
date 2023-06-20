#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program
 *
 * This function generates digit separated by comma,
 * using putchar only and not more than 4 times .
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
		if (num != 9)
		{
			putchar(',');
			putchar(' ');
		};
	};
	putchar('\n');
	return (0);
}
