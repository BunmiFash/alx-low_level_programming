#include "main.h"

/**
* _memset - Fills memory with a constant byte
*
* @s: Pointer to memeory area
*
* @b: Value that is to fill up memory area
*
* @n: number of bytes
*
* Return: Memory area @s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
