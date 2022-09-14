#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet 10x
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	int num;

	num = 0;

	while (num <= 10)
	{
		char alpha;

		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}
		_putchar('\n');
		num++;

	}
}
