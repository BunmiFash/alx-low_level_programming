#include "main.h"

/**
* print_binary - printd=s the binary representation of a number
*
* @n: Number
*
* Return: Void
*/

void print_binary(unsigned long int n)
{
	unsigned long int dup, i = 1;
	int len = 0;

	dup = n;

	while (dup > 0)
	{
		len++;
		dup >>= 1;
	}
	len -= 1;

	if (len > 0)
		i <<= len;
	while (i > 0)
	{
		if (n & i)
			_putchar('1');
		else
			_putchar('0');
		i >>= 1;
	}
}
