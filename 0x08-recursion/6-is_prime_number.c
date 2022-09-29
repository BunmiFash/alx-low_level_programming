#include "main.h"

/**
* prime - determines if a number is a prime number
*
* @n: Number
*
* @d: Divisor
*
* Return: 1 if prime, otherwise 0
*/

int prime(int n, int d)
{
	if (n < 2 || n % d == 0)
	{
		return (0);
	}
	else if (n > d / 2)
	{
		return (1);
	}
	else
	{
		return (prime(d + 1, n));
	}
}

/**
* is_prime_number - checks if an integer is a prime number
*
* @n: Integer
*
* Return: 1 if @n is a prime number, otherwise 0
*/

int is_prime_number(int n)
{
	if (n == 2)
	{
		return (1);
	}
	else
	{
		return (prime(2, n));
	}
}
