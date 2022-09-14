#include "main.h"
/**
 * print_times_table - prints multiplication table up to 15
 * @n: parameter
 * Return 0
 */

void print_times_table(int n)
{
	int row, column, multiply;

	if (n >= 0 && n <= 15)
	{row = 0;
		while (row <= n)
		{column = 0;
			while (column <= n)
			{multiply = row * column;
				if (column == 0)
				{_putchar('0' + multiply);
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					if (multiply <= 9)
					{
						_putchar(' ');
						_putchar(' ');
						_putchar('0' + multiply);
					}
					else if (multiply > 9 && multiply < 100)
					{
						_putchar(' ');
						_putchar('0' + (multiply / 10));
						_putchar('0' + (multiply % 10));
					}
					else if (multiply >= 100)
					{
						_putchar('0' + (multiply / 100));
						_putchar('0' + ((multiply / 10) % 10));
						_putchar('0' + (multiply % 10));
					}
				}
				column++;
			}
			_putchar('\n');
			row++;
		}
	}
}
