#include<stdio.h>
/**
 * main - Entry point
 * Return: 0
 */

int main(void)
{
	int first;

	int second;

	int third;

	int fourth;

	for (first = '0'; first <= '9'; first++)
	{
		for (second = '0'; second <= '9'; second++)
		{
			for (third = first; third <= '9'; third++)
			{
				for (fourth = second + 1; fourth <= '9'; fourth++)
				{
					putchar(first);
					putchar(second);
					putchar(' ');
					putchar(third);
					putchar(fourth);

					if (!((first == '9' && second == '8') && (third == '9' && fourth == '9')))
					{
						putchar(',');
						putchar(' ');
					}
				}
				fourth = '0';
			}
		}
	}
	putchar('\n');
	return (0);
}
