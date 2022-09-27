#include "main.h"

/**
* _strchr - locates a character in a string
*
* @s: String
*
* @c: character to be located in string @s
*
* Return: Pointer to c
*/

char *_strchr(char *s, char c)
{
	while (*s)
	{
		s++;

		if (*s == c)
		{
			return (s);
		}
	}
}
