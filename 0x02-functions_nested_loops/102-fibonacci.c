#include <stdio.h>
/**
 * main - Prints the frst 50 fibonacci series
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n = 1;
	int m = 2;
	int count = 1;
	int end = 50;

	while (count <= (end / 2))
	{
		printf("%d, %d, ", n, m);
		n += m;
		m += n;
		count++;
	}
	if (end % 2 == 1)
	{
		printf("%d", n);
	}
	printf("\n");
	return (0);
}
