#include "main.h"
#include <stdio.h>

/**
*main - check functions.
*Return: Always 0
*/

int main(void)
{
	/**
	*int n;
	*n = 402;
	*printf("n=%d\n", n);
	*reset_to_98(&n);
	*printf("n=%d\n", n);
	*/

	int a;
	int b;

	a = 98;
	b = 42;

	printf("a=%d, b=%d\n", a, b);
	swap_int(&a, &b);
	printf("a=%d, b=%d\n", a, b);
	return (0);

}
