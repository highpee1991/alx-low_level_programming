#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * This function generates 2 of 2 digit separated by comma,
 * using putchar only and not more than 4 times .
 * and print the result.
 *
 * Return: 0 on success
 */
int main(void)
{
	int limit = 1024;
	int sum = 0;
	int i;

	for (i = 0; i < limit; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
	}
	printf("%d\n", sum);
	return (0);
}
