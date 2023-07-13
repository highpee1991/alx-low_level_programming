#include <stdlib.h>
#include "main.h"

/**
 * free_grid - Frees the memory allocated for a 2-dimensional grid.
 * @grid: The grid to be freed.
 * @height: The height of the grid.
 *
 * Description: This function frees the memory previously allocated by the
 *              alloc_grid function for a 2-dimensional grid. It first frees
 *              each row of the grid individually and then frees the memory
 *              allocated for the array of row pointers.
 *
 * Return: None.
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0)
		return;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
