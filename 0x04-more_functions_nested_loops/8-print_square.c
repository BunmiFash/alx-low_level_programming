#include "main.h"
/**
* print_square - prints square, followed by a new line
* @size: Size of the square
* Return: void
*/

void print_square(int size)
{
	int row;

	int column;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (row = 0; row < size; row++)
		{
			for (column = 0; column < size; column++)
			{
				_putchar('#');
			}
			_putchar('#');
			_putchar('\n');
		}
	}
}
