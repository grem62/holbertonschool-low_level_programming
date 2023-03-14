#include "main.h"
#include <stdlib.h>

/**
 * free_grid - free a 2 dimensionnal array of int
 * @grid: The 2 dimensionnale array of int
 * @height: The height of grid
 */

void free_grid(int **grid, int height)
{
	int index;

	for (index = 0; index < height; index++)
		free(grid[index]);

	free(grid);
}
