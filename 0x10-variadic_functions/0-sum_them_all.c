#include <stdarg.h>
#include "variadic_functions.h"

/**
* sum_them_all - adds all parameters
*
* @n: First parameter
*
* Return: sum of parameters
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);
	va_end(ap);
	_putchar('\n');
}
