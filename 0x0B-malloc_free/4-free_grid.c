#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Frees a 2D grid created by alloc_grid.
 * @grid: The 2D grid to be freed.
 * @height: The height of the grid.
 *
 * Return: No return value (void).
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0)
	{
		return; /* Invalid input, do nothing */
	}

	for (i = 0; i < height; i++)
	{
		free(grid[i]); /* Free each row */
	}

	free(grid); /* Free the row pointers */
}
