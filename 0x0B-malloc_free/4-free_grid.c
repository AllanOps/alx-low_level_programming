#include "main.h"
#include <stdlib.h>
/**
 * free_grid - Frees a previously created 2D array by alloc_grid()
 * @grid: A double pointer to the 2D arr
 * @height: Array Height
 * Return: Nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
