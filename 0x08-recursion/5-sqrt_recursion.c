#include "main.h"

/**
* _sqrt - determines square root
*
* @n: integer whose square root is determined
*
* @sqroot: square root
*
* Return: natural square root, otherwise -1.
*/

int _sqrt(int n, int sqroot)
{
	if (sqroot * sqroot > n)
	{
		return (-1);
	}
	else if (sqroot * sqroot == n)
	{
		return (sqroot);
	}
	else
	{
		return (_sqrt(n, sqroot + 1));
	}
}

/**
* _sqrt_recursion -  returns the square root of a number
*
* @n: Integer whose square root is returned
*
* Return: square root of @n
*/

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (_sqrt(n, 0));
	}
}
