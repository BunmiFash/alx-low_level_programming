#include "main.h"
/**
* _strspn - gets the length of a prefix substring
*
* @s: String
*
* @accept: Character
*
* Return: Number of bytes
*/

unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	int match = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				match++;
				break;
			}
			if (accept[j + i] == '\0' && s[i] != accept[j])
			{
				return (match);
			}
		}
	}
	return (match);
}
