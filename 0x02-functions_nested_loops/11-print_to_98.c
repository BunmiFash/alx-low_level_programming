#include "main.h"
/**
 * print_to_98 - prints all natural numbers to 98
 * @n: Natural number
 * Return: Always 0 (Success)
 */

void print_to_98(int n)
{
	if (n >= 0)
	{
		while (n <= 98)
		{
			_putchar(n);
		}
		n++;
	}
	else if (n < 0)
	{
		while (n <= 98)
		{
			_putchar(n);
		}
		n++;
	}
	else if (n > 98)
	{
		while (n >= 98)
		{
			_putchar(n);
		}
		n--;
	}
}
