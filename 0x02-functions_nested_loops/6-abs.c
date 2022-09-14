#include "main.h"
/**
 * _abs - Computes absolute value of integers
 * @n: Parameter whose absolute value is returned
 * Return: Always 0 (Success)
 */

int _abs(int n)
{
	if (n > 0)
	{
		_putchar(n);
	}
	else if (n == 0)
	{
		_putchar(0);
	}
	else
	{
		_putchar('_');
		_putchar('n');
	}
	return (0);
}
