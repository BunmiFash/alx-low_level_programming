#include <stdlib.h>
#include <stdio.h>

/**
* main - adds positive number
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
	int sum;

	if (argc < 2)
	{
		printf("%d\n", 0);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (atoi(argv[i]) == 0)
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				sum += atoi(argv[i]);
			}
		}
		printf("%d\n", sum);
	}
	return (0);
}
