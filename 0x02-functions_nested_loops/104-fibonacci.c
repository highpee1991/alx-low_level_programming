#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Generate and print the first 98 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line
 *
 * Return: 0 for success
 */
int main(void)
{
	unsigned int counter;
	unsigned int num1 = 1;
	unsigned int num2 = 2;
	unsigned int next;

	printf("%u, %u", num1, num2);

	for (counter = 3; counter <= 98; counter++)
	{
		next = num1 + num2;
		printf(", %u", next);

		num1 = num2;
		num2 = next;
	}
	printf("\n");
	return (0);
}
