#include "main.h"
/**
*print_line - draws a straight line
*@n: Number of times '-' is to be printed
*Return: void
*/

void print_line(int n)
{
	int line;

	n = '_';
	for (line = 0; line < n; line++)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		_putchar('_');
	}
	_putchar('\n');
}
