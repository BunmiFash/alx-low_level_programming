#include <stdio.h>
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
		return (n);
	}
	else if (n == 0)
	{
		return (n);
	}
	else
	{
		return (-n);
	}
	return (0);
}
