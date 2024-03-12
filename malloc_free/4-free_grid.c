#include <stdlib.h>

/**
 * free_grid - frees a 2D array
 * @grid: the array
 * @height: the number of rows in the array
 *
 */
void free_grid(int **grid, int height)
{
	int ii;

	for (ii = 0 ; ii < height ; ii++)
		free(grid[ii]);
	free(grid);
}

