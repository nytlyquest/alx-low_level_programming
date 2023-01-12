#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional array
 * @grid: the 2 dimensional array location to be freed
 * @height: row of array
 *
 * Return: Nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
		return;
	while (i < height)
		free((int *)grid[i++]);
	free(grid);
}
