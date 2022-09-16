#include <stdio.h>

/**
*main - prints the largest prime factor of 612852475143
*Return: Always 0 (Success)
*/

int main(void)
{
	unsigned long i;
	unsigned long num = 612852475143;

	for (i = 2; i < num; i++)
	{
		if (num % i == 0)
		{
			num = num / i;
			i = 2;
		}
	}
	printf("%lu\n", num);
	return (0);
}
