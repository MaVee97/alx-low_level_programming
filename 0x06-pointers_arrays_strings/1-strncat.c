#include "main.h"
#include <string.h>

/**
 * *_strncat - concartinates two strings
 * @dest: function parameter
 * @src: function parameter
 * @n: function parameter
 * Return: void
 */

char *_strncat(char *dest, char *src, int n)
{
	int destlen = strlen(dest);
	int x;

	for (x = 0 ; x < n && *src != '\0' ; x++)
	{
		dest[destlen + x] = *src;
		src++;
	}
	dest[destlen + x] = '\0';
	return (dest);
}
