#include "main.h"

/**
* puts_half - prints the second half of a string
* @str: Sting to be halved
* Return: void
*/

void puts_half(char *str)
{
	int i;
	int n;

	for (i = 0; str[i] != '\0'; i++)
	{
	}
	if (i % 2 != 0)
	{
		n = (i + 1) / 2;
	}
	else
	{
		n = i / 2;
	}
	for (; str[n] != '\0'; n++)
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}
