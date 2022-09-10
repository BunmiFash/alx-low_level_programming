#include <stdio.h>
/**
 * main - Entry point
 *Description: Prints all alphabets except q and e
 *Return: 0
 */

int main(void)
{
	char alpha;

	alpha = 'a';
	while (alpha <= 'z')
	{
		if (alpha == 'e' || alpha == 'q')
		{
			alpha++;
			continue;
		}
		putchar(alpha);
		alpha++;
	}
	{
		putchar('\n');
	}
}
