#include "main.h"

/**
  *_strpbrk - main function of the prototype
  *@s: function parameter
  *@accept: Fuunction parameter
  *Return: Always 0.
  */

char *_strpbrk(char *s, char *accept)
{
	int x, y;

	for (y = 0; s[y] != '\0'; y++)
	{
	for (x = 0; accept[x] != '\0'; x++)
	{
	if (s[y] == accept[x])
	return (s + y);
	}
	}
	return (0);
}
