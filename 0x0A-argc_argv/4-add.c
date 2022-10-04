#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>

/**
* main - adds positive number
*
* @argc: Number of arguments
*
* @argv: Array of strings of arguments
*
* Return: Always 0 (Success)
*/

int main(int argc, char *argv[])
{
	int i, j, d;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (isdigit(argv[i][j]) == 0)
			{
				puts("Error");
				return (1);
			}
		}
	}
	for (i = 1; i < argc; i++)
	{
		d += atoi(argv[i]);
	}
	printf("%d\n", d);
	return (0);
}
