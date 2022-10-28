#include "main.h"

/**
* binary_to_uint - converts a binary number to an unsigned int
*
* @b: string of binary numbers.
*
* Return: The converted number
* Or  0 if one or more chars in thestring b is not 0 or 1
* or if b is NULL
*/

unsigned int binary_to_uint(const char *b)
{
	int i, bin;
	unsigned int num = 0;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' || b[i] != '1')
			return (0);

		num <<= 1;
		if (b[i] == '1')
		{
			num += 1;
		}
	}
	return (num);
}
