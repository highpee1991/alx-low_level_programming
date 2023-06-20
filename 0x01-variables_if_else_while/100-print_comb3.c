#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program
 *
 * This function generates 2 digits separated by a comma,
 * using putchar only and not more than 4 times,
 * and prints the result.
 *
 * Return: 0 on success
 */
int main(void)
{
	int dig1, dig2;

	for (dig1 = 0; dig1 <= 8; dig1++)
	{
		for (dig2 = dig1 + 1; dig2 <= 9; dig2++)
		{
			putchar(dig1 + '0');
			putchar(dig2 + '0');
			if (dig1 != 8 || dig2 != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
