#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid -it is a  function to free memory
 * @grid:it is a  pointer to grid of int type
 * @height:the  int type
 * Return:the  clean up memory
 */

void free_grid(int **grid, int height)
{
	int y;

	if (grid == NULL || grid == 0)
	{
		return;
	}
	for (y = 0; y < height;  y++)
	{
		free(grid[y]);
	}
	free(grid);
}
