#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * creat number of fibonacci to print inthis case fab
 * intialize the first 2 number prev and curr
 * print the first 2 number sepeately
 * using for loop generate and print other numbers
 * add new line to the iteration
 *
 * Return: 0 success
 */
int main(void)
{
	int fab = 50;
	int prev = 1;
	int curr = 2;
	int i;
	int next;

	printf("%d", curr);
	for (i = 3; i < fab; i++)
	{
		printf(", ");

		next = prev + curr;

		printf("%d", next);
		prev = curr;
		curr = next;
	}
	printf("\n");
	return (0);
}
