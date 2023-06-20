#include <stdio.h>
#include <stdlib.h>
#include <time.h>

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
	int n, lastdigit, result;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastdigit = abs(n) % 10;
	result = n < 0 ? -lastdigit : lastdigit;
	printf("Last digit of %d is %d ", n, result);

	if (result > 5)
	{
		printf("and is greater than 5\n");
	} else if (result == 0)
	{
		printf("and is 0\n");
	} else
	{
		printf("and is less than 6 and not 0\n");
	};
	/* print zero if one of the condtion is succesful */
	return (0);
}
