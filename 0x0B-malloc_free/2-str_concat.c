#include <stdlib.h>
#include "main.h"

/**
* str_concat - concatenaes two strings.
*
* @s1: First string
*
* @s2: Second string
*
* Return: pointer to concatenated string
*/

char *str_concat(char *s1, char *s2)
{
	int i, j;
	char *concat_str;
	int s1_len = 0;
	int s2_len = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (*(s1 + s1_len) != '\0')
	{
		s1_len++;
	}
	while (*(s2 + s2_len) != '\0')
	{
		s2_len++;
	}
	concat_str = malloc(1 + (sizeof(*s1) * s1_len) + (sizeof(*s2) * s2_len));

	if (concat_str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < s1_len; i++)
	{
		*(concat_str + i) = *(s1 + i);
	}
	for (j = 0; j < s2_len; j++, i++)
	{
		*(concat_str + i) = *(s2 + j);
	}
	return (concat_str);
}
