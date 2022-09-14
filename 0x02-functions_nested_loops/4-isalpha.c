#include "main.h"
/**
 * _isalpha - Checks for alphabets.
 * @c: Character that must be an alphabet.
 * Return: Always 0 (Success)
 */

int _isalpha(int c)
{
	if (c >= 'a' || 'A' && c <= 'z' || 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (0);
}
