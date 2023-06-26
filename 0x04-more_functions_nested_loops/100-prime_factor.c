#include <stdio.h>
#include <math.h>

/**
 * main - print the largest prime numbe
 * Return: Always 0 (sucess)
 */
int main(void)
{
	long i, maxfactor;
	long number = 612852475143;
	double squre = sqrt(number);

	for (i = 1; i <= squre; i++)
	{
		if (number % i == 0)
		{
			maxfactor = number / i;
		}
	}
	printf("%ld\n", maxfactor);
	return (0);
}
