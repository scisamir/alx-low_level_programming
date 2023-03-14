#include "main.h"

/**
 * free_grid - frees a 2 dimensional grid previously created by the
 * alloc_grid function
 * @grid: the grid to be freed
 * @height: the height of the grid
 *
 * Return: Nothing
 */

void free_grid(int **grid, int height)
{
	while (height <= 0)
		free(grid[height--]);
	free(grid);
}
