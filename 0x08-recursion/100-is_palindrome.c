#include "main.h"

/**
* check_string - checks if the characters of a string are the same
* from start and from end
*
* @start: String from start
*
* @end: String from end
*
* Return: 1 if characters are the same, otherwise, return 0
*/

int check_string(char *start, char *end)
{
	if (start >= end)
	{
		return (1);
	}
	else if (*start == *end)
	{
		return (check_string(start + 1, end - 1));
	}
	return (0);
}

/**
* _strlen - returns length of string
*
* @s: String
*
* Return: length
*/

int _strlen(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen(s + 1));
	}
}

/**
* is_palindrome - checks for palindrome
*
* @s: Pointer to string
*
* Return: 1 if the string is a palindrome, 0 otherwise.
*/

int is_palindrome(char *s)
{
	int length = _strlen(s);

	return (check_string(s, (s + length - 1)));
}
