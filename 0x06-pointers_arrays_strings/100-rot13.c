#include "main.h"

/**
 * rot13 - encodes string
 * @s: function parameter
 * Return: encoded string
 */

char *rot13(char *s)
{
	int x;
	int y;
	char *a = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *b = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (x = 0 ; s[x] != '\0' ; x++)
	{
		for (y = 0 ; a[y] != '\0' ; y++)
		{
			if (s[x] == a[y])
			{
				s[x] = b[y];
				break;
			}
		}
	}
	return (s);
}
