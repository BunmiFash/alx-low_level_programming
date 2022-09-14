#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @n: Number whose last digit is printed
 * Return: Always 0 (Success)
 */

int print_last_digit(int n)
{
	int last = n % 10;

	if (last < 0)
	{
		last = last * -1;
	}
	_putchar('0' + last);
	return (last);
}
