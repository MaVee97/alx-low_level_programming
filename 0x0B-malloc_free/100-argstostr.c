#include "main.h"

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: fuction parameter
 * @av: function parameter
 * Return: pointer
 */

char *argstostr(int ac, char **av)
{
	int x, y, z = 0;
	int count = 0;
	char *result;

	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y] != '\0'; y++)
		{
			count++;
		}
		count++;
	}

	result = malloc(sizeof(char) * count + 1);

	if (result == NULL)
	{
		return (NULL);
	}

	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y] != '\0'; y++)
		{
			result[z] = av[x][y];
			z++;
		}
		result[z++] = '\n';
	}
	result[z] = '\n';
	return (result);
}
