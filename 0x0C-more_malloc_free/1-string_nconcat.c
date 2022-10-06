#include "main.h"
#include <stdlib.h>

/**
* _strlen - returns length of string
*
* @s: String
*
* Return: Length of string
*/

int _strlen(char *s)
{
	int i = 0;
	int len = 0;

	while (*s[i] != '\0')
	{
		len++;
		i++;
	}
	return (len);
}

/**
* string_nconcat - concatenates two strings
*
* @s1: First string
*
* @s2: Second string
*
* @n: Number of bytes of second string to be concatenated
* with first string
*
* Return: ponter to allocated space containing the new string
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	int i, j, len, len_s1, len_s2, len_total;

	if (s1 == NULL)
	{
		s1 = " ";
	}
	if (s2 == NULL)
	{
		s2 = " ";
	}
	if (n >= _strlen(s2))
	{
		n = _strlen(s2);
	}
	len_s1 = _strlen(s1);
	len_s2 = _strlen(s2);
	len_total = len_s1 + len_s2 + 1;

	ptr = malloc(sizeof(*ptr) * len_total);

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; s1[i] != '\0'; i++)
	{
		*(ptr + i) = *(s1 + i);
	}
	for (j = 0; j < n; j++)
	{
		ptr[i + j] = *(s2 + j);
	}
	ptr[i + j] = '\0';
	return (ptr);
}
