#include <stdio.h>

/**
 * print_array - Prints n elements of an integer
 * array, followed by a new line.
 * @a: The array to be printed.
 * @n: The number of elements to be printed.
 */
void print_array(int *a, int n)
{
	int i;

	if (a == NULL || h <= 0)
		return;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n)
			printf(", ");
	}
	printf("\n");
}
