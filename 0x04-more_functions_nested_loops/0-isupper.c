#include "main.h"

/**
 * _isupper - checks if c is upper case or not
 * @c: function parameter
 * Return: void
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
		return (0);
}
