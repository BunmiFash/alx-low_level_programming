#include <stdio.h>
/**
 * main - Prints the sum of all multiples of 3 or 5;
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n = 0;
	int sum = 0;

	while (n < 1024)
	{
		if (n % 3 == 0 || n % 5 == 0)
		{
			sum += n;
		}
		n++;
	}
	printf("%d\n", sum);
	return (0);
}
