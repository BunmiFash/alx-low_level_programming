#include "main.h"
#include <stdio.h>


/**
* _strcpy - copies a string
* @dest: buffer
* @src: buffer
* Return: character
*/

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
