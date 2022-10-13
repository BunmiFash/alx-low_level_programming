#include "variadic_functions.h"


/**
 * print_char - Prints a character.
 *
 * @arg: Argument
 *
 * Return: void
 */

void print_char(va_list arg)
{
	char str = va_arg(arg, int);

	printf("%c", str);
}

/**
 * print_int - Prints an integer
 *
 * @arg: Arguments
 *
 * Return: void
 */

void print_int(va_list arg)
{
	int num = va_arg(arg, int);

	printf("%d", num);
}


/**
 * print_float - Prints a float.
 *
 * @arg: Argument
 *
 * Return: void
 */

void print_float(va_list arg)
{
	float num = va_arg(arg, double);

	printf("%f", num);
}

/**
 * print_string - Prints a string.
 *
 * @arg: Argument
 *
 * Return: void
 */

void print_string(va_list arg)
{
	char *str;

	str = va_arg(arg, char *);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}

	printf("%s", str);
}

/**
 *print_all - prints arguments of all types
 *
 *@format: Argument type
 *
 *Return: void
 */
void print_all(const char * const format, ...)
{
	va_list args;

	int i = 0, j = 0;

	char *separator = "";

	printer_t funcs[] = {
					   {"c", print_char},
					   {"i", print_int},
					   {"f", print_float},
					   {"s", print_string}
};

	va_start(args, format);

	while (format && (*(format + i)))
	{
		j = 0;

		while (j < 4 && (*(format + i) != *(funcs[j].symbol)))
		j++;

		if (j < 4)
		{
			printf("%s", separator);
			funcs[j].print(args);
			separator = ", ";
		}

	i++;

	}

	printf("\n");

	va_end(args);
}
