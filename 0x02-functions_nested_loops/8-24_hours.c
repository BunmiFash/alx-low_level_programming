#include "main.h"
/**
 * jack_bauer - Prints every minute of the day
 * Return: Always 0 (Success)
 */

void jack_bauer(void)
{
	int hour = 0, min;

	while (hour <= 23)
	{
		min = 0;
		while (min <= 59)
		{
			_putchar('0' + (hour / 10));
			_putchar('0' + (hour % 10));
			_putchar(':');
			_putchar('0' + (min / 10));
			_putchar('0' + (min % 10));
			_putchar('\n');
			min++;
		}
		hour++;
	}
}
