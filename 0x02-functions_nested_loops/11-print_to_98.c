#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints all natural numbers to 98
 * @n: Natural number
 * Return: Always 0 (Success)
 */

void print_to_98(int n)
{
	while (n < 98)
	{
		printf("%d, ", n);
		n++;
	}
	while (n > 98)
	{
		printf("%d, ", n);
			n--;
	}
	if (n == 98)
	{
		printf("%d", n);
	}
	_putchar('\n');
}
