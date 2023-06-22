#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_times_table - Entry point of the program
 *
 * This function generates time table using n aguement,
 * using putchar.
 * n is the starting point for the program.
 *
 * Return: 0 on success
 */
void print_times_table(int n)
{
	if (n >= 0 && n <= 15)
	{
		int i, j;
		int len = snprintf(NULL, 0, "%d", n * n);

		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				int result = i * j;

				printf("%*d", len, result);

				if (j != n)
					printf(", ");
			}
			printf("\n");
		}
	}
}
