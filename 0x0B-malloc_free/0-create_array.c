#include "main.h"

/**
 * create_array - creates an array of chars, and initializes it
 * @size: function parameter
 * @c: function parameter
 * Return: pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int x;
	char *arr;

	if (size == 0)
	{
		return (NULL);
	}

	arr = malloc(sizeof(char) * size);

	if (arr == NULL)
	{
		return (NULL);
	}

	for (x = 0 ; x < size ; x++)
	{
		arr[x] = c;
	}
	return (arr);
}
