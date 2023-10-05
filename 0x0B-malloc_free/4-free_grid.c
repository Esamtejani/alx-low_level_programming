#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *functio  free_grid - Entry point
 *@grid:the  rows of matrix
 *@height:the  columns of string
 * Return:the function a pointer to a 2 dimensional array of integers or null
 */
void free_grid(int **grid, int height)
{
	int i;
	int *p;

	for (i = 0; i < height; i++)
	{
		p = grid[i];
		free(p);
	}
	free(grid);
}
