#include "main.h"
#include <stdlib.h>

/**
* array_range - Creates an array of integers
*
* @min: range start
*
* @max: range end
*
* Return: Pointer to newly created array
*/

int *array_range(int min, int max)
{
	int i, n;
	int *ptr;

	n = max - min + 1;

	if (min > max)
	{
		return (NULL);
	}
	ptr = malloc(n * sizeof(int));
	if (ptr  == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < n; i++)
	{
		*(ptr + i) = min++;
	}
	return (ptr);
}
