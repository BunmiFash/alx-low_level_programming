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
		printf("%d", n);
	}
	else if (n == 0)
	{
		printf("%d", n);
	}
	else
	{
		printf("-%d", n);
	}
	return (0);
}
