#include <stdio.h>
/**
 * main - Prints the frst 50 fibonacci series
 * Return: Always 0 (Success)
 */

int main(void)
{
	unsigned long int n = 0;
	unsigned long int m = 1;
	unsigned long int add;
	int count = 0;

	while (count < 50)
	{
		add = n + m;
		printf("%lu", add);
		n = m;
		m = add;
		if (count == 49)
		{
			printf("\n");
		}
		else
		{
			printf(", ");
		}
		count++;
	}
	return (0);
}
