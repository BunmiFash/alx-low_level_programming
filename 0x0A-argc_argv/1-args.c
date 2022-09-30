#include <stdio.h>

/**
* main - prints the number of arguments passed to it
*
* @argc: Number of arguments.
*
* @argv: Array of strings of arguments.
*
* Return: Always 0 (Success)
*/

int main(int argc, char *argv[])
{
	(void)argv;

	if (argc > 0)
	{
		printf("%d\n", argc - 1);
	}
	return (0);
}
