#include <stdlib.h>
#include "main.h"

/**
* alloc_grid - returns a pointer to a 2D array of integers
*
* @width: Array width(column)
*
* @height: Array height(row)
*
* Return: pointer to array
*/

int **alloc_grid(int width, int height)
{
	int i, j, **ptr;

	if (width ==  0 || width == 0)
	{
		return (NULL);
	}
	ptr = malloc(sizeof(int) * height);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		*(ptr + i) = malloc(sizeof(int) * width);
		if (*(ptr + i) == NULL)
		{
			for (i = 0; i < height; i++)
			{
				free(*(ptr + i));
			}
			free(ptr);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			ptr[i][j] = 0;
		}
	}
	return (ptr);
}
