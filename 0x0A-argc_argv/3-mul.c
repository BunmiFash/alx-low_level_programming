#include <stdio.h>
#include <stdlib.h>
/**
* main - multiplies two numbers
*
* @argc: Number of arguments
*
* @argv: Array of strings of arguments
*
* Return: Always 0
*/

int main(int argc, char *argv[])
{
	int i;
	int mult = 1;

	if (argc > 2)
	{
		for (i = 1; i < argc; i++)
		{
			mult *= atoi(argv[i]);
		}
		printf("%d\n",mult);
	}
	else
	{
		printf("Error\n");
	}
	return (0);
}
