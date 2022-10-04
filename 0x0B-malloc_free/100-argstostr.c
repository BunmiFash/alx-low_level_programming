#include <stdlib.h>
#include "main.h"

/**
* argstostr - concatenates all the arguments of a program
*
* @ac: Number of arguments
*
* @av: Pointer to arguments
*
* Return: Pointer to new string on success, or NULL
* on failure
*/

char *argstostr(int ac, char **av)
{
	int i, j, num = 0, total = 0;
	char *res;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			total++;
		}
		total++;
	}
	res = malloc(sizeof(char) * total + 1);
	if (res == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			res[num++] = av[i][j];
		}
		res[num++] = '\n';
	}
	res[total] = '\0';
	return (res);
}
