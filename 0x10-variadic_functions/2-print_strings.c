#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
* print_strings - prints strings, followed by a new line
*
* @separator: Separator
*
* @n: Number of arguments
*
* Return: void
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strn;
	unsigned int i;
	char *s;

	va_start(strn, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(strn, char *);
	if (s)
	printf("%s", s);
	else
	printf("(nil)");

	if (i < n - 1)
	if (separator)
	printf("%s", separator);
	}

	printf("\n");
	va_end(strn);
}
