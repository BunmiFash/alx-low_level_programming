#include "main.h"
#include <stdio.h>

/**
* isPrintable_Ascii - checks if n is an ASCII character
* @n: integer
* Return: Always 0 (Success)
*/

int isPrintable_Ascii(int n)
{
	return (n >= 32 && n <= 126);
}

/**
* hexes - prints hex values of strings
* @b: string to be hexed
* @start: starting position
* @end: ending position
*/

void hexes(char *b, int start, int end)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i < end)
		{
			printf("%02x", *(b + start + i));
		}
		else
		{
			printf(" ");
		}
		if (i % 2)
		{
			printf(" ");
		}
	}
}

/**
* print_ascii - prins ascii values
* @b: string
* @start: starting position
* @end: Ending position
*/

void print_ascii(char *b, int start, int end)
{
	int ch, i = 0;

	while (i < end)
	{
		ch = *(b + i + start);
		if (!isPrintable_Ascii(ch))
		{
			ch = 46;
		}
		printf("%c", ch);
		i++;
	}
}

/**
* print_buffer - prints a buffer
* @b: Buffer pointer
* @size: Bytesof buffer
* Return: void
*/

void print_buffer(char *b, int size)
{
	int start, end;

	if (size > 0)
	{
		start = 0;

		while (start < size)
		{
			end = (size - start < 10 ? size - start : 10);
			printf("%08x: ", start);
			hexes(b, start, end);
			print_ascii(b, start, end);
			printf("\n");
			start += 10;
		}
	}
	else
	{
		printf("\n");
	}
}
