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
	unsigned long fabi[98];
	unsigned int count;

	fabi[0] = 1;
	fabi[1] = 2;

	printf("%lu, %lu", fabi[0], fabi[1]);

	for (count = 3; count <= 98; count++)
	{
		fabi[count] = fabi[count - 1] + fabi[count - 2];
		printf(", %lu", fabi[count]);
	}
	printf("\n");
	return (0);
}
