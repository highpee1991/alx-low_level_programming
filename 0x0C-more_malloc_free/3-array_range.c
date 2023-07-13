#include <stdlib.h>
#include <stdio.h>

/**
 * array_range - Create array of integers filled with numbers from min to max
 * @min: First number in the array
 * @max: Largest number in the array
 *
 * Return: Pointer to new array, NULL if failed
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i, n_size, j;

	if (min > max)
		return (NULL);

	n_size = max - min;
	ptr = malloc((n_size + 1) * sizeof(int));

	i = 0;
	j = min;
	while (j <= max)
	{
		ptr[i] = j;
		i++;
		j++;
	}
	return (ptr);
}
