#include <stdio.h>
/**
 * main - Prints the frst 50 fibonacci series
 * Return: Always 0 (Success)
 */

int main(void)
{
	long int n = 1;
	long int m = 2;
	int count = 1;
	int end = 50;

	while (count <= (end / 2))
	{
		printf("%li, %li, ", n, m);
		n += m;
		m += n;
		count++;
	}
	if (end % 2 == 1)
	{
		printf("%li", m);
	}
	printf("\n");
	return (0);
}
