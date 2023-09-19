#include "main.h"
#include <stdio.h>

/**
 * *_strcpy - copies string pointed to by src
 * @dest: function parameter
 * @src: function parameter
 * Return: void
 */

char *_strcpy(char *dest, const char *src)
{
	if (dest == NULL || src == NULL)
	{
		return (NULL);
	}
	char *originalDest = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (originalDest);
}
