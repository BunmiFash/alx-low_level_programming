#include <stdio.h>

/**
* main - prints the name of the program, followed by a new line.
* @argc: Number of arguments
*
* @argv: Array of strings of the agruments
*
* Return: Always 0(Success)
*/

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s", argv[i]);
	}
	printf("\n");
	return (0);
}
