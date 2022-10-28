#include "main.h"

/**
* flip_bits - returns the number of bits you would need to flip to
* get from one number to another
*
* @n: Number
*
* @m: Number
* Return: Number of bits to change
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, d = 0;
	unsigned long int num;
	unsigned long int exo = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		num = exo >> i;
		if (num & 1)
		{
			d++;
		}
	}
	return (d);
}
