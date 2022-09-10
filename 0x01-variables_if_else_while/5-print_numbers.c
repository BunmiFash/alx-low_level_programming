#include <stdio.h>
/**
 * main - Entry point
 * Description: prints  all single digits
 *Return: 0
 */

int main(void)
{
	int digit;

	while (digit < 10)
	{
		printf("%d", digit);
		digit++;
	}
	return (0);
}
