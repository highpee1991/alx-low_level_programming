#include <stdlib.h>
#include <stdio.h>

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
		j++;
		i++;
	}
	return (ptr);
}
