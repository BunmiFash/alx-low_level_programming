#include "main.h"

/**
* _memcpy - Copies memory area
*
* @dest: Destination area
*
* @src: Source
*
* @n: Number of bytes copied
*
* Return: Destination
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
