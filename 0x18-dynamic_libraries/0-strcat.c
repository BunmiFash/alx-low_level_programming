#include "main.h"
#include <stdio.h>
/**
* _strcat - Concatenates two strings.
* @dest: Destination String
* @src: Source String
* Return: pointer to dest
*/

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	for (j = 0; src[j] != '\0'; j++)
	{
		*(dest + i) = src[j];
		i++;
	}
	*(dest + i) = '\0';

	return (dest);
}
