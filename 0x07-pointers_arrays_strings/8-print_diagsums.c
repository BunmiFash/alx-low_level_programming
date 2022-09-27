#include "main.h"
#include <stdio.h>
/**
* print_diagsums - prints the sum of the two diagonals
* of a square matrix of integers
*
* @a: array
*
* @size: siz of the matrix
*
* Return: void
*/

void print_diagsums(int *a, int size)
{
	int i, j, k = 0;

	while (i < size)
	{
		j += a[i];
		k += a[size - i - 1];
		a += size;
		i++;
	}
	printf("%d, ", j);
	printf("%d\n", k);
}
