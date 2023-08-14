#include "main.h"

/**
 * free_grid - firidmsooakf
 *
 * @grid: grid of memory
 * @height: rfhurfhkkdjif dhdhrfjrr koedetjt
 *
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
