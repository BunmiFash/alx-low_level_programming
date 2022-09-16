#include "main.h"
/**
* print_triangle - prints a triangle on the terminal
* @size: The size of the triangle
* Return: void
*/

void print_triangle(int size)
{
	int row;
	int column;
	int diag;

	if (size <= 0)
	{
		_putchar('#');
	}
	else
	{
		for (row = 0; row < size; row++)
		{
			for (column = size - row; column > 1; column--)
			{
				_putchar(' ');
			}
			for (diag = 0; diag < row; diag++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
