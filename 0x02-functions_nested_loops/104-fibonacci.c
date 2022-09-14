#include <stdio.h>
/**
 * main - Fibonacci series
 * Return: Always 0 (Success)
 */

int main(void)
{
	int count = 0;
	unsigned long x = 0;
	unsigned long y = 1;
	unsigned long add;
	unsigned long x_half, x_half2, y_half, y_half2;
	unsigned long half, half2;

	while (count < 92)
	{
		add = x + y;
		printf("%lu, ", add);
		x = y;
		y = add;
		count++;
	}
	x_half = x / 10000000000;
	y_half = y / 10000000000;
	x_half2 = x % 10000000000;
	y_half2 = y % 10000000000;

	count = 93;

	while (count < 99)
	{
		half = x_half + y_half;
		half2 = x_half2 + y_half2;
		if ((x_half2 + y_half2) > 9999999999)
		{
			half += 1;
			half2 %= 10000000000;
		}
		printf("%lu%lu", half, half2);
		if (count != 98)
		{
			printf(", ");
		}
		x_half = y_half;
		x_half2 = y_half2;
		y_half = half;
		y_half2 = half2;
		count++;
	}
	printf("\n");
	return (0);
}
