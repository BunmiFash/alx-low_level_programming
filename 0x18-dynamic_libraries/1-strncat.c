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
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != src[n])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}
