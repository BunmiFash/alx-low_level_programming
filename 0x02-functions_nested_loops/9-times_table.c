#include "main.h"
/**
 * times_table - Prints the 9 times table
 * Return: Always 0 (Success)
 */

void times_table(void)
{
	int row, column, multiply;

	row = 0;

	while (row <= 9)
	{
		column = 0;

		while (column <= 9)
		{
			multiply = row * column;
			if (column == 0)
			{
				_putchar('0' + multiply);
			}
			else if (multiply <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + multiply);
			}
			else if (multiply > 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar('0' + (multiply / 10));
				_putchar('0' + (multiply % 10));
			}

			column++;
		}
		row++;
		_putchar('\n');
	}
}
