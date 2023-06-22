#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_times_table - Generates a times table starting from n
 *
 * This function generates a times table starting from the given number n.
 * The times table is printed using putchar.
 *
 * @n: Starting number for the times table
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
