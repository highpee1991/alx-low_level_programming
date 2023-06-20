#include <stdio.h>
#include <stdlib.h>

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
	int dig1, dig2;

	for (dig1 = 0; dig1 <= 98; dig1++)
	{
		for (dig2 = dig1 + 1; dig2 <= 99; dig2++)
		{
			putchar((dig1 / 10) + '0');
			putchar((dig1 % 10) + '0');
			putchar(' ');
			putchar((dig2 / 10) + '0');
			putchar((dig2 % 10) + '0');

			if (dig1 != 98 || dig2 != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
