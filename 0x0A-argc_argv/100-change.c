#include <stdlib.h>
#include <stdio.h>

/**
* main - prints the minimum number of coins to
* change for an amount of money
*
* @argc: Number of arguments
*
* @argv: Array of strings
*
* Return: Always 0
*/

int main(int argc, char *argv[])
{
	int n = atoi(argv[1]);
	int cent = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (n < 0)
	{
		printf("0\n");
		return (0);
	}

	cent += n / 25;
	n = n % 25;
	cent += n / 10;
	n = n % 10;
	cent += n / 5;
	n = n % 5;
	cent += n / 2;
	n = n % 2;
	cent += n / 1;

	printf("%d\n", cent);
	return (0);

}
