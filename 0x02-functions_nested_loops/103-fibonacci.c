#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
	unsigned long a = 0, b = 1, add;
	int sum;

	while (1)
	{
		add = a + b;
		if (add > 4000000)
		{
			break;
		}
		else if ((add % 2) == 0)
		{
			sum += add;
		}
		a = b;
		b = add;
	}
	printf("%d\n", sum);
	return (0);
}
