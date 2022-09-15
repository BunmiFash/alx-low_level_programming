#include "main.h"
#include <stdio.h>

/**
* main - Entry point
*Description: Calls all functions
*
*Return: Always 0
*/

int main(void)
{
	char c = 'w';

	printf("%c: %d\n", c, _isupper(c));

	return (0);
}
