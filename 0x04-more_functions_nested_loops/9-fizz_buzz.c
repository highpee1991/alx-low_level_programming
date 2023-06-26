#include <stdio.h>

/**
 * main - entrypoint of the programme
 *  with a variation of the FizzBuzz game.
 *
 * Description: This function prints numbers
 * from 1 to 100, replacing multiples of 3 with "Fizz",
 * multiples of 5 with "Buzz", and multiples of both
 *  and 5 with "FizzBuzz".
 *
 *  Return: 0 on success
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fiz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buz ");
		}
		else
		{
			printf("%d ", i);
		}
	}
	printf("\n");

	return (0);
}
