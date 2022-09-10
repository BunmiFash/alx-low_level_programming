#include<stdio.h>
/**
 * main - Entry point
 * Description: prints all possible different combinations of two digits.
 * Return: 0
 */

int main(void)
{
	int first;

	int second;

	for (first = '0'; first <= '9'; first++)
	{
		for (second = (first + 1); second <= '9'; second++)
		{
			putchar(first);
			putchar(second);

			if (first != '8' || second != '9')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
}
