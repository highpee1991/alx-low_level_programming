#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * This function generates a random number and determines if it is positive,
 * negative, or zero.
 * It then displays the number and the result of the condition.
 *
 * Return: 0 on success
 */
int main(void)
{
	int n;

	srand(time(NULL));
	n = rand() - RAND_MAX / 2;
	printf("%d", n); /* declare the value before checking the condition */

	if (n > 0)
	{
		printf("is positive\n");
	} else if (n == 0)
	{
		printf("is zero\n");
	} else
	{
		printf("is negative\n");
	};
	return (0);
}
