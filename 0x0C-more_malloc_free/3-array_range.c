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
	int *array;
	int index, size, current_value;

	if (min > max)
		return (NULL);

	size = max - min + 1;
	array = malloc((size + 1) * sizeof(int));

	index = 0;
	current_value = min;
	while (current_value <= max)
	{
		array[index] = current_value;
		index++;
		current_value++;
	}
	return (array);
}
