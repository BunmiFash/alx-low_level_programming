#include "main.h"
/**
* print_diagonal - draws a diagonal line on the terminal
* @n: Number of times the line is drawn
*Return: void
*/

void print_diagonal(int n)
{
	int row;

	int column;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (row = 0; row < n; row++)
		{
			for (column = 0; column < row; column++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
