#include <stdlib.h>
#include "main.h"

/**
* _strdup - returns a pointer to a newly allocated space
* in memeory, which contains a copy of the string given as
* a parameter
*
* @str: Pointer to string
*
* Return: pointer to string
*/

char *_strdup(char *str)
{
	char *ptr;
	int i, len = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	while (*(str + i))
	{
		len++, i++;
	}
	len++;

	ptr = malloc(sizeof(char) * len);

	if (ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < len; i++)
		{
			*(ptr + i) = *(str + i);
		}

	}
	*(ptr + i) = '\0';
	return (ptr);
}
