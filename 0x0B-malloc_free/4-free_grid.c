#include <stdlib.h>
#include "main.h"

/**
* free_grid - frees a 2D grid previously created
*
* @grid: previously created grid
*
* @height: Number of columns
*
* Return: void
*/

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(*(grid + i));
	}
	free(grid);
}
