#include <stdio.h>
#include <math.h>

/**
 * main - print the largest prime numbe
 * Return: Always 0 (sucess)
 */
int main(void)
{
	long i, maxfactor = 1;
	long number = 612852475143;
	long squre = sqrt(number);

	for (i = 2; i <= squre; i++)
	{
		if (number % i == 0)
		{
			maxfactor = number / i;
			break;
		}
	}
	printf("%ld\n", maxfactor);
	return (0);
}
