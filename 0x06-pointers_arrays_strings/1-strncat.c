#include "main.h"

/**
* _strncat - Concatenates two strings
* @dest: Destination string
* @src: Source string
* @n: Number of bytes from source string transferred to destination string
* Return: Returns destination string
*/

char *_strncat(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		*(dset + i) = src[i];
	}
	for (i = 0; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
