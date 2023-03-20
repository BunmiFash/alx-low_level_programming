#include "main.h"

/**
* _strlen - returns the length of a string
* @s: parameter whose string length is returned
* Return: Always 0 (Success)
*/

int _strlen(char *s)
{
	int sum;

	sum = 0;

	while (*s != '\0')
	{
		sum++;
		s++;
	}

	return (sum);
}
