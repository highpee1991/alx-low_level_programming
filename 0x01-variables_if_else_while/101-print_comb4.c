#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program
 *
 * This function generates 3 digit separated by comma,
 * using putchar only and not more than 4 times .
 * and print the result.
 *
 * Return: 0 on success
 */
int main(void)
{
	int dig1, dig2, dig3;

	for (dig1 = 0; dig1 <= 7; dig1++)
	{
		for (dig2 = dig1 + 1; dig2 <= 8; dig2++)
		{
			for (dig3 = dig2 + 1; dig3 <= 9; dig3++)
			{
				putchar(dig1 + '0');
				putchar(dig2 + '0');
				putchar(dig3 + '0');

				if (dig1 != 7 || dig2 != 8 || dig3 != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
