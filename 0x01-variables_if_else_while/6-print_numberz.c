#include <stdio.h>

/**
 * main - Entry point
 * Description: prints all single base 10 digits
 * Return: 0
 */

int main(void)
{
	int digit;

	digit = '0';

	while (digit <= '9')
	{
		putchar(digit);
		digit++;
	}
	{
		putchar('\n');
	}
	return (0);
}
