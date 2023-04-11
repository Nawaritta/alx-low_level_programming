#include "main.c"
#include <stddef.h>
#include <stdlib.h>
/**
 *free_grid  - frees a grid already created
 *@grid: grid to free
 *@height: height of grid
 */
void free_grid(int **grid, int height)
{
	int i;

	if (height != 0 && grid == NULL)
	{
		for (i = 0; i < height; i++)
			free(grid[i]);
	}
	free(grid);
}
