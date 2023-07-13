#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - Allocates a 2D grid of integers and initializes it to 0.
 * @width: The width of the grid.
 * @height: The height of the grid.
 *
 * Return: Pointer to the allocated grid, or NULL if allocation fails
 *         or if width or height is 0 or negative.
 */
int **alloc_grid(int width, int height)
{
	int i = 0, j;
	int **mat;

	if (width == 0 || height == 0 || width < 0 || height < 0)
		return (NULL);

	mat = malloc(height * sizeof(int *));
	if (mat == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		mat[i] = malloc(width * sizeof(int));
		if (mat[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(mat[j]);
			free(mat);
			return (NULL);
		}

		for (j = 0; j < width; j++)
		{
			mat[i][j] = 0;
		}
	}
	return (mat);
}
