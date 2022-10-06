#include "main.h"
#include <stdlib.h>

/**
* _calloc - allocates memory for an array.
*
* @nmemb: number of elements
*
* @size: Size of each element
*
* Return: pointer to allocated memory
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	int arr;
	void *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	arr = nmemb * size;

	for (i = 0; i < arr; i++)
	{
		*((int *)ptr + i) = 0;
	}
	return (ptr);

}