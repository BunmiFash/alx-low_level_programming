#include "main.h"

/**
* _atoi - converts a string to an integer
* @s: string to be converted to an integer
* Return: integer or 0 if none
*/

int _atoi(char *s)
{
	int sign = 1, result;

	while (s[0] != '\0')
	{
		if (s[0] == '-')
		{
			sign *= -1;
		}
		else if (s[0] >= '0' && s[0] <= '9')
		{
			result = (result * 10) + (s[0] - '0') * sign;
		}
		else if (result)
		{
			break;
		}
		s++;
	}
	return (result);
}
