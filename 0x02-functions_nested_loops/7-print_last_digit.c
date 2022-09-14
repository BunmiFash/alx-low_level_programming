#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @n: Number whose last digit is printed
 * Return: Always 0 (Success)
 */

int print_last_digit(int n)
{
	if (n < 0)
	{
		n = n * -1;
	}
	int last = n % 10;

	_putchar(last);
	return (last);
}
