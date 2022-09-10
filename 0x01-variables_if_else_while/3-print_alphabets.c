#include <stdio.h>

/**
 * main - Entry point
 * Description: This code prints the alphabets in lower and upper case
 *
 *Return: 0
 */

int main(void)
{
	char alpha;
	char alphas;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		putchar(alpha);
	}
	for (alphas = 'A'; alphas <= 'Z'; alphas++)
	{
		putchar(alphas);
	}
	{
		putchar('\n');
	}
	return (0);
}
