#include "main.h"

/**
* _isupper - Checks for uppercase character
*@c: Character to be checked
*
*Return: 1 for success, 0 otherwise
*/

int _isupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
