#include "main.h"

/**
* _puts - prints a string to the standard output
* @str: String to be printed out
* Return: void
*/

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
