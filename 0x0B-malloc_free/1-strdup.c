#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: function parameter
 * Return: pointer to a new memory
 */

char *_strdup(char *str)
{
	int x;
	int count = 0;
	char *copy;

	if (str == NULL)
	{
		return (NULL);
	}

	for (x = 0 ; str[x] != '\0' ; x++)
	{
		count++;
	}

	copy = malloc(sizeof(char) * count + 1);

	if (copy == NULL)
	{
		return (NULL);
	}

	for (x = 0; str[x] != '\0'; x++)
	{
		copy[x] = str[x];
	}
	return (copy);
}
