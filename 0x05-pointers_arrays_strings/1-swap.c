#include "main.h"

/**
* swap_int - swaps the values of two integers.
* @a: First integer
* @b: Second integer
* Return: void
*/

void swap_int(int *a, int *b)
{
	int first = *a;
	*a = *b;

	*b = first;
}
