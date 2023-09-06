#include "main.h"
#include <stdlib.h>
/**
 * free_grid - Start of function that frees a 2 dimensional grid 
 * previously created by your alloc_grid function.
 * @grid: The grid
 * @height: Row
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
