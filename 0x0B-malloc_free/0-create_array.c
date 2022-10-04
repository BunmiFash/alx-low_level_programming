#include <stdlib.h>
#include "main.h"

/**
* create_array - craetes an array of chars,
* and initializes it with a specific char
*
* @size: Size of memory to be alocated
*
* @c: Character
*
* Return: pointer to the array, or null
*/

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	arr = malloc(sizeof(char) * size);

	if (size == 0)
	{
		return (NULL);
	}
	else if (arr == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			*(arr + i) = c;
		}
	}
	*(arr + i) = '\0';
	return (arr);
	}
