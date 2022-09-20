#include "main.h"

/**
* rev_string - reverses a string
* @s: String to be reveresed.
* Return: void
*/

void rev_string(char *s)
{
	int i = 0, j, right;

	while (s[i])
	{
		i++;
	}
	j = i / 2;
	right = 0;

	while (right != j)
	{
		char tmp = s[right];
		int left = i - right - 1;

		s[right] = s[left];
		s[left] = tmp;

		right++;
	}
}
