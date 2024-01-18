#include <stdlib.h>
#include "main.h"

/**
 * free_grid - 2 dimensional grid previously created by your alloc_grid
 * @grid: array grid
 * @height: grid height
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
