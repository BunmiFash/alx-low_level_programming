#include "main.h"
/**
 * times_table - Prints the 9 times table
 * Return: Always 0 (Success)
 */

void times_table(void)
{
	int n = 0;

	while (n <= 12)
	{
		_putchar('0' +(9 * n));
	}
}
