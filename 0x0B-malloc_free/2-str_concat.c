#include "main.h"

/**
 * str_concat - that concatenates two strings
 * @s1: function parameter
 * @s2: function parameter
 * Return: pointer to new allocated space
 */

char *str_concat(char *s1, char *s2)
{
	int x;
	char *result;
	int s1len = 0;
	int s2len = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (x = 0; s1[x] != '\0'; x++)
	{
		s1len++;
	}
	for (x = 0; s2[x] != '\0'; x++)
	{
		s2len++;
	}

	result = malloc(sizeof(char) * (s1len + s2len) + 1);

	if (result == NULL)
	{
		return (NULL);
	}
	for (x = 0; s1[x] != '\0'; x++)
	{
		result[x] = s1[x];
	}
	for (x = 0; s2[x] != '\0'; x++)
	{
		result[s1len + x] = s2[x];
	}
	return (result);
}
