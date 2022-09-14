#include "main.h"
/**
 * main - prints alphabets in lowercase followed by a new line.
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		putchar(alpha);
	}
}

int main(void)
{
	print_alphabet();
	putchar('\n');
	return (0);
}
