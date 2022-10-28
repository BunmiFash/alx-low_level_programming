#include "main.h"

/**
* get_bit - returns the valu of a bit at a given index
*
* @n: Number
*
* @index: index
*
* Return: value of the bit at the index
* Or -1 if an error occured
*/

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int num, ch;

	if (index > (sizeof(unsigned long int) * 8 - 1))
	{
		return (-1);
	}
	num = 1 << index;
	ch = n & num;
	if (ch == num)
	{
		return (1);
	}
	return (0);
}
