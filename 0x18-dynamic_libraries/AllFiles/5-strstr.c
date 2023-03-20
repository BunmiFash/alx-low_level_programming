#include "main.h"
/**
* _strstr - Locates a substring
*
* @haystack: String to search
*
* @needle: Substring to find
*
* Return: Pointer to the beginning of loated substring
*/

char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *src = haystack;
		char *sub = needle;

		while (*haystack && *sub && *haystack == *sub)
		{
			haystack++;
			sub++;
		}
		if (!*sub)
		{
			return (src);
		}
		haystack = src + 1;
	}
	return (0);
}
