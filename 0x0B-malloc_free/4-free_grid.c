#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - Will be able to free the 2d array
 * @grid: The 2d grid
 * @height: The height of the dimension grid
 * Description: frees memory of grid
 * Return: nothing
 *
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

