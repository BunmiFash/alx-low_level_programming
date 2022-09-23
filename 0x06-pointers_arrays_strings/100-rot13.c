#include "main.h"

/**
* rot13 - encodes a sring using rot13
* @s: String to be encoded
* Return: encoded rot13 string
*/

char *rot13(char *s)
{
	int i;
	char rot13[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char ROT13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char *ptr = s;

	while (*s)
	{
		i = 0;

		while (i <= 52)
		{
			if (*s == rot13[i])
			{
				*s = ROT13[i];
				break;
			}
			i++;
		}
		s++;
	}
	return (ptr);
}
