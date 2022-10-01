#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>

/**
* is_digit - checks if the argument passed to command line is a digit
*
* @argv: Array of strings of arguments
*
* Return: True if argument is a digit
*/

bool is_digit(char *argv)
{
	int j = 0;

	for (j = 0; argv[j]; j++)
	{
		if (!(argv[j] >= '0' && argv[j] <= '9'))
		{
			return (0);
		}
		else
		{
			return (1);
		}
	}
	return (0);
}

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
	int i = 1;
	int sum;

	if (argc == 1)
	{
		printf("%d\n", 0);
		return (0);
	}
	while (i < argc)
	{
		if (is_digit(argv[i]))
		{
			sum += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
