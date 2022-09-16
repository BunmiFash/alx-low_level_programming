#include <stdio.h>
#include "main.h"
/**
* fizz_buzz - Fizzbuzz
* Return: void
*/

void fizz_buzz(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3) == 0)
		{
			printf("%s", "Fizz");
		}
		else if ((i % 5) == 0)
		{
			printf("%s", "Buzz");
		}
		else if((i % 3) == 0 && (i % 5) == 0)
		{
			printf("%s", "FizzBuzz");
		}
		else
		{
			printf("%d",i);
		}
		if (i != 100)
		{
			printf(" ");
		}
	}
	_putchar('\n');

}

