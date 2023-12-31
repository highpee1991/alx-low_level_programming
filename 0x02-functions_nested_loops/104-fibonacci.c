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
	unsigned long num1 = 1;
	unsigned long num2 = 2;
	unsigned long next;
	unsigned int count;


	printf("%lu, %lu", num1, num2);

	for (count = 3; count <= 98; count++)
	{
		next = num1 + num2;
		printf(", %lu", next);
		num1 = num2;
		num2 = next;
	}
	printf("\n");
	return (0);
}
